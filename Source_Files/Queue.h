#include <iostream>

class Queue {
private:
	//"front" holds the dequeue pointer and "rear" holds the enqueue pointer
	//"data" holds the elements of the queue.
	//"maxSize" holds the Maximum size of the queue.
	int front, rear;	
	int *data;			
	int maxSize;		
public:
	Queue(int m) {
		maxSize = m;
		front = rear = -1;
		data = new int[maxSize]();
	}
	~Queue() {
		delete[]data;
	}
	void enqueue(int element) {
		//Inserts an element into the queue.
		if (!isFull()){
			if(front == -1) front = 0;
			data[++rear] = element;
		}
	}
	void dequeue() {
		//Removes an element from the queue.
		if (!isEmpty()) front++;
	}
	int peek() {
		//Returns the element at the beginning of the queue.
		return data[front];
	}
	bool isFull() {
		//Returns whether queue is full or not.
		if (rear + 1 < maxSize) return false;
		else return true;
	}
	bool isEmpty() {
		//Returns whether queue is empty or not
		//At the same time resets front and rear pointers to 0 if queue is empty.
		if (front == -1 || front > rear) {
			front = rear = -1;
			return true;
		}
		else return false;
	}
};