#include <iostream>
class AVLNode {
private:
    int key, value, height;
    AVLNode * left, *right, *parent;
public:
    AVLNode(int k, int v, AVLNode * p) {
        key = k;
        value = v;
        height = 0;
        parent = p;
        left = right = NULL;
    }
    void setKey(int k) { key = k; }
    void setValue(int v) { value = v; }
    void setHeight(int h) { height = h; }
    void setLeft(AVLNode *l) { left = l; }
    void setRight(AVLNode *r) { right = r; }
    void setParent(AVLNode *p) { parent = p; }

    int getKey() { return key; }
    int getValue() { return value; }
    int getHeight() { return height; }
    AVLNode *getLeft() { return left; }
    AVLNode *getRight() { return right; }
    AVLNode *getParent() { return parent; }
};

class AVLTree {
private:
    AVLNode * root;
    bool balanceCheck;
    int i;
    void deleteNode_0(AVLNode * markNode) {
        if(markNode == root)
            root = NULL;
        else {
            AVLNode *parent = markNode->getParent();
            if (parent->getLeft() == markNode) parent->setLeft(NULL);
            else parent->setRight(NULL);
            retrace(parent);
        }
        delete markNode;
    }
    void deleteNode_1(AVLNode * markNode, char childPos) {
        AVLNode *child;
        if(childPos == 'L') { child = markNode->getLeft(); markNode->setLeft(NULL); }
        else{ child = markNode->getRight(); markNode->setRight(NULL); }
        markNode->setKey(child->getKey());
        markNode->setValue(child->getValue());
        retrace(markNode);
        delete child;
    }
    void deleteNode_2(AVLNode * markNode) {
        AVLNode *pre = getPredecessor(markNode->getLeft());
        int key = pre->getKey(), value = pre->getValue();
        deleteNode(key);
        markNode->setKey(key);
        markNode->setValue(value);
    }

    void leftRotation(AVLNode * X, AVLNode *Y){
        AVLNode *xParent = X->getParent(), *yLeft = Y->getLeft();
        X->setRight(yLeft);
        if(yLeft != NULL) yLeft->setParent(X);
        Y->setLeft(X);
        Y->setParent(xParent);
        X->setParent(Y);
        if(X == root) root = Y;
        else if(xParent->getLeft() == X) xParent->setLeft(Y);
        else xParent->setRight(Y);
    }
    void rightRotation(AVLNode * X, AVLNode *Y){
        AVLNode *xParent = X->getParent(), *yRight = Y->getRight();
        X->setLeft(yRight);
        if(yRight != NULL) yRight->setParent(X);
        Y->setRight(X);
        Y->setParent(xParent);
        X->setParent(Y);
        if(X == root) root = Y;
        else if(xParent->getLeft() == X) xParent->setLeft(Y);
        else xParent->setRight(Y);
    }
    void retrace(AVLNode *X){
        while(X != NULL){
            int xBalanceFactor = findHeight(X->getRight()) - findHeight(X->getLeft());
            if(xBalanceFactor < -1){
                AVLNode * Y = X->getLeft();
                int yBalanceFactor = findHeight(Y->getRight()) - findHeight(Y->getLeft());
                if(yBalanceFactor <= 0) rightRotation(X, Y);
                else if(yBalanceFactor > 0){
                    AVLNode * Z = Y->getRight();
                    leftRotation(Y, Z);
                    Y->setHeight(findHeight(Y));
                    rightRotation(X, Z);
                }
            }
            else if(xBalanceFactor > 1){
                AVLNode * Y = X->getRight();
                int yBalanceFactor = findHeight(Y->getRight()) - findHeight(Y->getLeft());
                if(yBalanceFactor < 0) {
                    AVLNode * Z = Y->getLeft();
                    rightRotation(Y, Z);
                    Y->setHeight(findHeight(Y));
                    leftRotation(X, Z);
                }
                else if(yBalanceFactor >= 0) leftRotation(X, Y);
            }
            else{
                X->setHeight(findHeight(X));
                X = X->getParent();
            }
        }
    }
    int findHeight(AVLNode * X){
        if(X == NULL) return -1;
        else if(X->getLeft() == NULL && X->getRight() == NULL) return 0;
        else if(X->getLeft() != NULL && X->getRight() != NULL)
            return std::max(X->getLeft()->getHeight(), X->getRight()->getHeight()) + 1;
        else if(X->getLeft() != NULL) return X->getLeft()->getHeight() + 1;
        else if(X->getRight() != NULL) return X->getRight()->getHeight() + 1;
    }
public:
    AVLTree() {
        root = NULL;
        balanceCheck = true;
        i = 0;
    }
    void insertNode(int key, int value) {
        AVLNode * temp = root;
        if (root == NULL) root = new AVLNode(key, value, NULL);
        while (temp != NULL) {
            if (temp->getKey() == key) { temp->setValue(value); return; }
            else if (key < temp->getKey()) {
                if (temp->getLeft() != NULL) temp = temp->getLeft();
                else {
                    temp->setLeft(new AVLNode(key, value, temp));
                    return retrace(temp->getLeft());
                }
            }
            else {
                if (temp->getRight() != NULL) temp = temp->getRight();
                else {
                    temp->setRight(new AVLNode(key, value, temp));
                    return retrace(temp->getRight());
                }
            }
        }
    }
    AVLNode * searchNode(int key) {
        AVLNode * temp = root;
        while (temp != NULL) {
            if (temp->getKey() == key) break;
            else if (key < temp->getKey()) temp = temp->getLeft();
            else temp = temp->getRight();
        }
        return temp;
    }
    void deleteNode(int key) {
        AVLNode *markNode = searchNode(key);
        if(markNode == NULL) return;
        if(markNode->getLeft() == NULL && markNode->getRight() == NULL) deleteNode_0(markNode);
        else if(markNode->getLeft() != NULL && markNode->getRight() != NULL) deleteNode_2(markNode);
        else if(markNode->getLeft() != NULL) deleteNode_1(markNode, 'L');
        else if(markNode->getRight() != NULL) deleteNode_1(markNode, 'R');
    }
    AVLNode * getPredecessor(AVLNode * temp) {
        while (temp != NULL) {
            if (temp->getRight() == NULL) break;
            else temp = temp->getRight();
        }
        return temp;
    }
    void inOrder(AVLNode *temp, int *data) {
        if (temp == NULL) return;
        else {
            inOrder(temp->getLeft(), data);
            data[i++] = temp->getKey();
            inOrder(temp->getRight(), data);
        }
    }
    void getInorder(int * data){
        i = 0;
        inOrder(root, data);
    }
    void checkTreeBalance(AVLNode * node, int * bal){
        if(node == NULL) return;
        else{
            checkTreeBalance(node->getLeft(), bal);
            checkTreeBalance(node->getRight(), bal);
            int b = findHeight(node->getRight()) - findHeight(node->getLeft());
            bal[i++] = b;
            if(b < -1 || b > 1) balanceCheck = false;
            return;
        }
    }
    bool isBalanced(int *bal){
        balanceCheck = true;
        i = 0;
        checkTreeBalance(root, bal);
        return balanceCheck;
    }
};