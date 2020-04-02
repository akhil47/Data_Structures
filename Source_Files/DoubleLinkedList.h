class DLLNode {
private:
	int data;
	DLLNode *prev, *next;
public:
	DLLNode(int value) {
		data = value;
		prev = NULL;
		next = NULL;
	}
	int getData() { return data; }
	void setData(int value) { data = value; }
	DLLNode * getNext() { return next; }
	DLLNode * getPrev() { return prev; }
	void setNext(DLLNode * temp) { next = temp; }
	void setPrev(DLLNode * temp) { prev = temp; }
};
class DoubleLinkedList {
private:
	DLLNode * head;
	int maxSize;
public:
	DoubleLinkedList() {
		head = NULL;
		maxSize = 0;
	}
	void insertStart(int value) {
		DLLNode * newNode = new DLLNode(value);
		if (head == NULL) head = newNode;
		else {
			newNode->setNext(head);
			newNode->setPrev(NULL);
			head->setPrev(newNode);
			head = newNode;
		}
	}
	void insertEnd(int value) {
		DLLNode * newNode = new DLLNode(value), * temp = head;
		if (head == NULL) return insertStart(value);
		while (temp->getNext() != NULL) temp = temp->getNext();
		temp->setNext(newNode);
		newNode->setPrev(temp);
		newNode->setNext(NULL);
	}
	void insertMiddle(int value, int key) {
		DLLNode * newNode = new DLLNode(value), *temp = head;
		while (temp != NULL) {
			if (temp->getData() == key) {
				newNode->setPrev(temp);
				newNode->setNext(temp->getNext());
				temp->setNext(newNode);
				if (newNode->getNext() != NULL) {
					temp = newNode->getNext();
					temp->setPrev(newNode);
				}
				break;
			}
			temp = temp->getNext();
		}
	}
	void deleteNode(int value) {
		DLLNode * temp = head, *prev, *next;
		if (head->getData() == value) {
			head = head->getNext();
			if(head != NULL)
				head->setPrev(NULL);
			delete temp;
			return;
		}
		while (temp != NULL) {
			if (temp->getData() == value) {
				prev = temp->getPrev();
				next = temp->getNext();
				prev->setNext(next);
				if(next != NULL)
					next->setPrev(prev);
				delete temp;
				break;
			}
			temp = temp->getNext();
		}
	}
	DLLNode * getHead() {
		DLLNode *temp = head;
		return temp;
	}
};