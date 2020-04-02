class LLNode {
private:
	int data;
	LLNode *next;
public:
	LLNode(int value) {
		data = value;
		next = NULL;
	}
	int getData() {
		return data;
	}
	LLNode* getNext() {
		return next;
	}
	void setNext(LLNode *newNode) {
		next = newNode;
	}
};

class LinkedList {
private:
	LLNode * Head;
	int maxSize;
public:
	LinkedList() {
		Head = NULL;
		maxSize = 0;
	}
	void insertBack(int value) {
		if (Head == NULL) return insertFront(value);
		LLNode * temp = Head;
		while (temp->getNext() != NULL) temp = temp->getNext();

		LLNode *newNode = new LLNode(value);
		temp->setNext(newNode);
		
		maxSize += 1;
		
	}
	void insertFront(int value) {
		if (Head == NULL)
			Head = new LLNode(value);
		else {
			LLNode *newNode = new LLNode(value);
			newNode->setNext(Head);
			Head = newNode;
		}
		maxSize += 1;
	}
	void insertMiddle(int value, int key) {
		LLNode * temp = Head;
		while (temp != NULL) {
			if (temp->getData() == key) {
				LLNode *newNode = new LLNode(value);
				newNode->setNext(temp->getNext());
				temp->setNext(newNode);
				maxSize += 1;
				break;
			}
			temp = temp->getNext();
		}
	}
	void deleteNode(int value) {
		LLNode *temp = Head;
		LLNode *prev = Head;
		while (temp != NULL) {
			if (temp == Head && temp->getData() == value) {
				Head = temp->getNext();
				delete temp;
				maxSize -= 1;
				break;
			}
			else if(temp->getData() == value){
				prev->setNext(temp->getNext());
				delete temp;
				maxSize -= 1;
				break;
			}
			prev = temp;
			temp = temp->getNext();
		}
	}
	bool search(int value) {
		LLNode * temp = Head;
		while (temp != NULL) {
			if (temp->getData() == value) return true;
			temp = temp->getNext();
		}
		return false;
	}
	LLNode * getHead() {
		return Head;
	}
};