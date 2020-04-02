#include <iostream>
#include <bits/stdc++.h>
class Heap {
private:
	int *heapLoc;
	int heapSize, maxSize;
	std::vector<std::pair<long, int>> data;

	void swap(int i, int j) {
		int temp = heapLoc[data[i].second];
		heapLoc[data[i].second] = heapLoc[data[j].second];
		heapLoc[data[j].second] = temp;

		std::pair<long, int> node;
		node.first = data[i].first;
		node.second = data[i].second;
		data[i].first = data[j].first;
		data[i].second = data[j].second;
		data[j].first = node.first;
		data[j].second = node.second;
	}
	void downHeap(int i) {
		int small = i;
		int left = (2 * i) + 1;
		int right = (2 * i) + 2;

		if (left < heapSize && data[left].first < data[small].first)
			small = left;
		if (right < heapSize && data[right].first < data[small].first)
			small = right;
		if (small != i) {
            swap(i, small);
            downHeap(small);
		}
	}
	void upHeap(int i) {
		int parent = (i - 1) / 2;
		if (parent >= 0 && i != 0) {
			if (data[parent].first > data[i].first)
                swap(parent, i);
            upHeap(parent);
		}
	}

public:
    Heap(int n) {
		maxSize = n;
        heapSize = 0;
		heapLoc = new int[maxSize]();
		data.resize(maxSize);
	}
	void insert(long i, int j) {
		data[heapSize].first = i;
		data[heapSize].second = j;
		heapLoc[heapSize] = heapSize;
        upHeap(heapSize);
		heapSize++;
	}
	std::pair<long, int> deleteMin() {
		std::pair<long, int> temp = data[0];
		heapLoc[data[0].second] = -1;
		heapLoc[data[heapSize - 1].second] = 0;

		data[0].first = data[heapSize - 1].first;
		data[0].second = data[heapSize - 1].second;
		heapSize--;
        downHeap(0);
		return temp;
	}
	void update(int i, long value) {
		data[heapLoc[i]].first = value;
        upHeap(heapLoc[i]);
	}
	long getValue(int i) {
		return data[heapLoc[i]].first;
	}
    int getSize(){
        return heapSize;
    }
};