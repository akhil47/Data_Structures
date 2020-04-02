class CircularQueue {
private:
	int maxSize;
	int front, rear;
	int *data;

public:
	CircularQueue(int n) {
		maxSize = n;
		front = -1;
		rear = -1;
		data = new int[maxSize]();
	}
	~CircularQueue() {
		delete[] data;
	}

	void enQueue(int element) {
		if (!isFull()) {
			if (front == -1) front = 0;
			rear = (rear + 1) % maxSize;
			data[rear] = element;
		}
	}
	void deQueue() {
		if (!isEmpty()) {
			if (front == rear)
				front = rear = -1;
			else
				front = (front + 1) % maxSize;
		}
	}

	int peek() {
		if (!isEmpty())
			return data[front];
	}
	bool isFull() {
		if ((rear + 1) % maxSize == front || (rear == maxSize - 1 && front == 0))
			return true;
		else return false;
	}
	bool isEmpty() {
		if (front == -1)
			return true;
		else return false;
	}
};