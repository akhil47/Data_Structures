#include <iostream>
template <typename K, typename V>
class RBNode {
private:
    K key;
    V value;
    RBNode *left, *right, *parent;
    char color;
public:
    RBNode(K k, V v) {
        key = k;
        value = v;
        color = 'R';
        left = NULL;
        right = NULL;
        parent = NULL;
    }

    void setKey(K k) { key = k; }
    void setValue(V v) { value = v; }
    void setLeft(RBNode *l) { left = l; }
    void setRight(RBNode *r) { right = r; }
    void setParent(RBNode *p) { parent = p; }
    void setColor(char c) { color = c; }

    K getKey() { return key; }
    V getValue() { return value; }
    RBNode *getLeft() { return left; }
    RBNode *getRight() { return right; }
    RBNode *getParent() { return parent; }
    char getColor() { return color; }
};

template <typename K, typename V>
class RedBlackTree {
private:
    RBNode <K, V> *root;
    int i = 0;
    int blackNodes = -1;
    bool flag;

    RBNode <K, V> *createNode(K k, V v, RBNode <K, V> *parent, char color) {
        RBNode <K, V> *newNode = new RBNode<K, V>(k, v);
        newNode->setParent(parent);
        newNode->setColor(color);
        return newNode;
    }
    char fetchColor(RBNode <K, V> * X){
        if(X == NULL) return 'B';
        else return X->getColor();
    }
    void setColors(RBNode <K, V> *grandParent, RBNode <K, V> *parent, RBNode <K, V> *Uncle){
        parent->setColor('B');
        Uncle->setColor('B');
        grandParent->setColor('R');
    }
    void changeColors(RBNode <K, V> *X, RBNode <K, V> *Y) {
        char temp = X->getColor();
        X->setColor(Y->getColor());
        Y->setColor(temp);
    }
    void leftRotation(RBNode <K, V> *X, RBNode <K, V> *Y, bool colorChange) {
        RBNode <K, V>*xParent = X->getParent(), *yLeft = Y->getLeft();
        X->setRight(yLeft);
        if(yLeft != NULL) yLeft->setParent(X);
        Y->setLeft(X);
        Y->setParent(X->getParent());
        X->setParent(Y);
        if (colorChange) changeColors(X, Y);
        if (X == root) root = Y;
        else if(xParent->getRight() == X) xParent->setRight(Y);
        else xParent->setLeft(Y);
    }
    void rightRotation(RBNode <K, V> *X, RBNode <K, V> *Y, bool colorChange) {
        RBNode <K, V>*xParent = X->getParent(), *yRight = Y->getRight();
        X->setLeft(yRight);
        if(yRight != NULL) yRight->setParent(X);
        Y->setRight(X);
        Y->setParent(X->getParent());
        X->setParent(Y);
        if (colorChange) changeColors(X, Y);
        if (X == root) root = Y;
        else if(xParent->getRight() == X) xParent->setRight(Y);
        else xParent->setLeft(Y);
    }
    RBNode <K, V> * getPredecessor(RBNode <K, V> *node){
        while(node != NULL){
            if(node->getRight() == NULL) break;
            else node = node->getRight();
        }
        return node;
    }
    void insertFixUp(RBNode <K, V> *X) {
        while (X->getParent() != NULL && (X->getColor() == 'R' && X->getParent()->getColor() == 'R')) {
            RBNode <K, V> *parent = X->getParent();
            RBNode <K, V> *grandParent = parent->getParent();
            if (grandParent == NULL) break;
            if (grandParent->getLeft() == parent) {
                RBNode <K, V> *Uncle = grandParent->getRight();
                if (Uncle == NULL || Uncle->getColor() == 'B') {
                    if (parent->getLeft() == X) rightRotation(grandParent, parent, true); //LL Rotation
                    else {                                                                //LR Rotation
                        leftRotation(parent, X, false);
                        rightRotation(grandParent, X, true);
                    }
                } else {
                    setColors(grandParent, parent, Uncle);
                    X = grandParent;
                }
            } else {
                RBNode <K, V> *Uncle = grandParent->getLeft();
                if (Uncle == NULL || Uncle->getColor() == 'B') {
                    if (parent->getRight() == X) leftRotation(grandParent, parent, true); //RR Rotation
                    else {                                                                //RL Rotation
                        rightRotation(parent, X, false);
                        leftRotation(grandParent, X, true);
                    }
                } else {
                    setColors(grandParent, parent, Uncle);
                    X = grandParent;
                }
            }
        }
        root->setColor('B');
    }
    void deleteFixUp(RBNode <K, V> *X){
        RBNode <K, V> *parent = NULL, *sibling = NULL;
        RBNode <K, V> *siblingLeft = NULL, *siblingRight = NULL;
        char childPos = ' ';
        char parentColor, siblingColor, leftSibColor, rightSibColor;
        while(X != NULL){
            parent = X->getParent();
            if(parent != NULL) {
                if (parent->getLeft() == X) { sibling = parent->getRight();childPos = 'L'; }
                else { sibling = parent->getLeft();childPos = 'R'; }
                if(sibling != NULL){ siblingLeft = sibling->getLeft(); siblingRight = sibling->getRight(); }
            }
            parentColor = fetchColor(parent);
            siblingColor = fetchColor(sibling);
            leftSibColor = fetchColor(siblingLeft);
            rightSibColor = fetchColor(siblingRight);

            //6 cases of Double Black
            if(X == root) X = deleteCase_1(X);
            else if(parentColor == 'B' && siblingColor == 'R'){
                if(childPos == 'L') X = deleteCase_2_Left(X, parent, sibling);
                else X = deleteCase_2_Right(X, parent, sibling);
            }
            else if(siblingColor == 'B' && leftSibColor == 'B' && rightSibColor == 'B'){
                if(parentColor == 'B') X = deleteCase_3(parent, sibling);
                else X = deleteCase_4(parent, sibling);
            }
            else if(childPos == 'L' && siblingColor == 'B' && rightSibColor == 'R')
                X = deleteCase_6_Left(parent, sibling, siblingRight);
            else if(childPos == 'R' && siblingColor == 'B' && leftSibColor == 'R')
                X = deleteCase_6_Right(parent, sibling, siblingLeft);
            else if(siblingColor == 'B') {
                if (childPos == 'L' && leftSibColor == 'R' && rightSibColor == 'B')
                    X = deleteCase_5_Left(X, sibling, siblingLeft);
                else if(childPos == 'R' && leftSibColor == 'B' && rightSibColor == 'R')
                    X = deleteCase_5_Right(X, sibling, siblingRight);
            }
        }
    }
    void deleteNode_0(RBNode <K, V> * markNode){
        if(markNode == root)
            root = NULL;
        else {
            RBNode<K, V> *parent = markNode->getParent();
            if (markNode->getColor() == 'B') deleteFixUp(markNode);
            if (parent->getLeft() == markNode) parent->setLeft(NULL);
            else parent->setRight(NULL);
        }
        delete markNode;
    }
    void deleteNode_1(RBNode <K, V> * markNode, char childPos){
        //Node With one child will always be a black node with red child.
        RBNode <K, V> *child;
        if(childPos == 'L') { child = markNode->getLeft(); markNode->setLeft(NULL); }
        else{ child = markNode->getRight(); markNode->setRight(NULL); }
        markNode->setKey(child->getKey());
        markNode->setValue(child->getValue());
        delete child;
    }
    void deleteNode_2(RBNode <K, V> * markNode){
        RBNode <K, V> *pre = getPredecessor(markNode->getLeft());
        int key = pre->getKey(), value = pre->getValue();
        deleteNode(key);
        markNode->setKey(key);
        markNode->setValue(value);
    }

    RBNode <K, V> * deleteCase_1(RBNode <K, V> * X){ return NULL; } //Done
    RBNode <K, V> * deleteCase_2_Left(RBNode <K, V> * X, RBNode <K, V> * Parent, RBNode <K, V> * Sibling){
        leftRotation(Parent, Sibling, true);
        return X;
    }
    RBNode <K, V> * deleteCase_2_Right(RBNode <K, V> * X, RBNode <K, V> * Parent, RBNode <K, V> * Sibling){
        rightRotation(Parent, Sibling, true);
        return X;
    }
    RBNode <K, V> * deleteCase_3(RBNode <K, V> * Parent, RBNode <K, V> * Sibling){
        Sibling->setColor('R');
        return Parent;
    }
    RBNode <K, V> * deleteCase_4(RBNode <K, V> * Parent, RBNode <K, V> * Sibling){
        changeColors(Parent, Sibling);
        return NULL;
    }
    RBNode <K, V> * deleteCase_5_Left(RBNode <K, V> * X, RBNode <K, V> * Sibling, RBNode <K, V> * siblingLeft){
        rightRotation(Sibling, siblingLeft, true);
        return X;
    }
    RBNode <K, V> * deleteCase_5_Right(RBNode <K, V> * X, RBNode <K, V> * Sibling, RBNode <K, V> * siblingRight){
        leftRotation(Sibling, siblingRight, true);
        return X;
    }
    RBNode <K, V> * deleteCase_6_Left(RBNode <K, V> * Parent, RBNode <K, V> * Sibling, RBNode <K, V> * siblingRight){
        leftRotation(Parent, Sibling, true);
        siblingRight->setColor('B');
        return NULL;
    }
    RBNode <K, V> * deleteCase_6_Right(RBNode <K, V> * Parent, RBNode <K, V> * Sibling, RBNode <K, V> * siblingLeft){
        rightRotation(Parent, Sibling, true);
        siblingLeft->setColor('B');
        return NULL;
    }

    void inOrder(RBNode <K, V> *root, int *data, char *color) {
        if (root == NULL) return;
        else {
            inOrder(root->getLeft(), data, color);
            data[i] = root->getKey();
            color[i++] = root->getColor();
            inOrder(root->getRight(), data, color);
        }
    }
    void checkBlackNodeProperty(RBNode<K, V> *node, int count){
        if(node == NULL){
            if(blackNodes == -1) blackNodes = count;
            else if(blackNodes != count) flag = false;
            return;
        }
        if(node->getColor() == 'B') count += 1;
        checkBlackNodeProperty(node->getLeft(), count);
        checkBlackNodeProperty(node->getRight(), count);
    }
    char checkRedRedProperty(RBNode<K, V> *node){
        if(node == NULL) return 'B';
        else{
            char nodeColor = node->getColor();
            char left = checkRedRedProperty(node->getLeft());
            char right = checkRedRedProperty(node->getRight());
            if(left == 'R' && nodeColor == 'R') flag = false;
            else if(right == 'R' && nodeColor == 'R') flag = false;
            return nodeColor;
        }
    }

public:
    void insertNode(K k, V v) {
        RBNode <K, V> *temp = root;
        if (root == NULL) {
            root = createNode(k, v, NULL, 'B');
            return;
        }
        while (true) {
            if (temp->getKey() == k) {
                temp->setValue(v);
                return;
            } else if (k < temp->getKey()) {
                if (temp->getLeft() == NULL) {
                    temp->setLeft(createNode(k, v, temp, 'R'));
                    return insertFixUp(temp->getLeft());
                } else temp = temp->getLeft();
            } else {
                if (temp->getRight() == NULL) {
                    temp->setRight(createNode(k, v, temp, 'R'));
                    return insertFixUp(temp->getRight());
                } else temp = temp->getRight();
            }
        }
    }
    RBNode <K, V>* searchNode(K k){
        RBNode <K, V>*temp = root;
        while(temp != NULL){
            int currKey = temp->getKey();
            if(currKey == k) return temp;
            else if(k < currKey) temp = temp->getLeft();
            else temp = temp->getRight();
        }
        return NULL;
    }
    void deleteNode(K k){
        RBNode <K, V> *markNode = searchNode(k);
        if(markNode == NULL) return;
        if(markNode->getLeft() == NULL && markNode->getRight() == NULL) deleteNode_0(markNode);
        else if(markNode->getLeft() != NULL && markNode->getRight() != NULL) deleteNode_2(markNode);
        else if(markNode->getLeft() != NULL) deleteNode_1(markNode, 'L');
        else if(markNode->getRight() != NULL) deleteNode_1(markNode, 'R');
    }

    void getInorder(int *data, char *color) {
        i = 0;
        inOrder(root, data, color);
    }
    bool checkRedBlackTreeProperties(){
        flag = true;
        bool f1, f2;
        blackNodes = -1; checkBlackNodeProperty(root, 0); f1 = flag;
        flag = true;
        checkRedRedProperty(root); f2 = flag;
        if(f1 && f2) return true;
        else return false;
    }
};