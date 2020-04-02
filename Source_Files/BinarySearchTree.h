#include <iostream>
class BSTNode {
private:
	int key, value;
	BSTNode * left, *right;
public:
	BSTNode(int k, int v) { key = k; value = v; left = right = NULL; }
	void setValue(int v) { value = v; }
	void setLeft(BSTNode *l) { left = l; }
	void setRight(BSTNode *r) { right = r; }
	void setKey(int k) { key = k; }

	int getKey() { return key; }
	int getValue() { return value; }
	BSTNode *getLeft() { return left; }
	BSTNode *getRight() { return right; }
};

class BinarySearchTree {
private:
	BSTNode * root;
	void deleteNode_0(BSTNode * temp, BSTNode *parent, int key, char relation) {
		if (root == temp) { root = NULL; delete temp; }
		else {
			if (relation == 'l')parent->setLeft(NULL);
			else parent->setRight(NULL);
			delete temp;
		}
	}
	void deleteNode_1(BSTNode * temp, BSTNode *parent, int key, bool flag, char relation) {
		//flag = false if node has left child & flag = true for right child
		//relation = 'l' if node is left child to parent and = 'r' if right child
		if (parent == NULL) {
			if (!flag) root = temp->getLeft();
			else root = temp->getRight();
		}
		else if (!flag) {
			if (relation == 'l') parent->setLeft(temp->getLeft());
			else parent->setRight(temp->getLeft());
		}
		else {
			if (relation == 'l') parent->setLeft(temp->getRight());
			else parent->setRight(temp->getRight());
		}
		delete temp;
	}
	void deleteNode_2(BSTNode * temp, int key) {
		BSTNode * pre = getPreDecessor(temp->getLeft());
		int preKey = pre->getKey(), preVal = pre->getValue();
		deleteNode(preKey);
		temp->setKey(preKey);
		temp->setValue(preVal);
	}
public:
	BinarySearchTree() {
		root = NULL;
	}
	void insertNode(int key, int value) {
		BSTNode * temp = root, *newNode = new BSTNode(key, value);
		if (root == NULL) { root = newNode; return; }
		while (temp != NULL) {
			if (temp->getKey() == key) { temp->setValue(value); return; }
			else if (key < temp->getKey()) {
				if (temp->getLeft() != NULL) temp = temp->getLeft();
				else { temp->setLeft(newNode); return; }
			}
			else {
				if (temp->getRight() != NULL) temp = temp->getRight();
				else { temp->setRight(newNode); return; }
			}
		}
	}
	BSTNode * searchNode(int key) {
		BSTNode * temp = root;
		while (temp != NULL) {
			if (temp->getKey() == key) break;
			else if (key < temp->getKey()) temp = temp->getLeft();
			else temp = temp->getRight();
		}
		return temp;
	}
	bool deleteNode(int key) {
		BSTNode *temp = searchNode(key);
		std::pair<BSTNode*, char> parent;
		if (temp == NULL) return false;
		if (temp != root) parent = getParent(key);

		if (temp->getLeft() == NULL && temp->getRight() == NULL) deleteNode_0(temp, parent.first, key, parent.second);
		else if (temp->getLeft() != NULL && temp->getRight() != NULL) deleteNode_2(temp, key);
		else if (temp->getLeft() != NULL) deleteNode_1(temp, parent.first, key, false, parent.second);
		else if (temp->getRight() != NULL) deleteNode_1(temp, parent.first, key, true, parent.second);
		return true;
	}
	std::pair <BSTNode*, char> getParent(int key) {
		BSTNode * temp = root;
		while (temp != NULL) {
			if (temp->getLeft() != NULL) {
				if (temp->getLeft()->getKey() == key) return std::make_pair(temp, 'l');
			}
			if (temp->getRight() != NULL) {
				if (temp->getRight()->getKey() == key) return std::make_pair(temp, 'r');
			}
			if (key < temp->getKey()) temp = temp->getLeft();
			else temp = temp->getRight();
		}
	}
	BSTNode * getPreDecessor(BSTNode * temp) {
		while (temp != NULL) {
			if (temp->getRight() == NULL) break;
			else temp = temp->getRight();
		}
		return temp;
	}
	void inOrder(BSTNode *temp) {
		if (temp == NULL) return;
		else {
			inOrder(temp->getLeft());
			std::cout << temp->getKey() <<" ";
			inOrder(temp->getRight());
		}
	}
	void printInOrder() {
		inOrder(root);
		std::cout << std::endl;
	}
};