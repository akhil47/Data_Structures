#include<iostream>
class Stack {
private:
	int maxSize;	//Holds the capacity of the Stack
	int top;		//Holds the current position of the stack
	int *data;		//Contains data that is pushed on to stack
public:
	Stack(int max) {
		maxSize = max;
		top = -1;
		data = new int[maxSize]();
	}
	~Stack() {
		delete[]data;
	}
	void push(int element) {
		//Inserts an element in to the stack
		if (!isFull())
			data[++top] = element;
	}
	void pop() {
		//Removes an element from the stack
		if (!isEmpty())
			top--;
	}
	int peek() {
		//Returns the Last inserted element onto the Stack
		return data[top];
	}
	bool isFull() {
		//Tells whether Stack is full or not
		if (top == maxSize - 1)
			return true;
		else return false;
	}
	bool isEmpty() {
		//Tells whether Stack is empty or not
		if (top == -1)
			return true;
		else return false;
	}
};