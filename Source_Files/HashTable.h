#include <iostream>
#include <bits/stdc++.h>
class Slot {
private:
	int key, data;
	bool deleted;

public:
	Slot() {
		key = NULL;
		data = NULL;
		deleted = false;
	}
	Slot(int k, int v) {
		key = k;
		data = v;
		deleted = false;
	}
	int getValue() { return data; }
	int getKey() { return key; }
	bool isDeleted() { return deleted; }
	void setValue(int v) { data = v; }
	void setKey(int k) { key = k; }
	void setDeleted(bool d) { deleted = d; }
};
class HashTable {
private:
	Slot * myTable;
	int maxSize;
public:
	HashTable(int size) {
		maxSize = size;
		myTable = new Slot[maxSize];
	}
	~HashTable(){
		delete[] myTable;
	}
	int hash_1(int key) {
		return key % maxSize;
	}
	int hash_2(int key) {
		return 1 + (key % (maxSize - 1));
	}
	bool insert(int k, int v) {
		int h1 = hash_1(k);
		int h2 = hash_2(k);
		int hash, i = 0;
		while (true) {
			hash = (h1 + (i * h2)) % maxSize;
			if (h1 % maxSize == hash && i != 0)
				break;
			if (myTable[hash].getKey() == k) {
				myTable[hash].setValue(v);
				return true;
			}
			else if (myTable[hash].getValue() != NULL) i++;
			else break;
		}
		if (myTable[hash].getKey() == NULL) {
			myTable[hash].setKey(k);
			myTable[hash].setValue(v);
			myTable[hash].setDeleted(false);
			return true;
		}
		else 
			return false;
	}

	int search(int k) {
		int h1 = hash_1(k);
		int h2 = hash_2(k);
		int hash, i = 0;
		while (true) {
			hash = (h1 + (i * h2)) % maxSize;
			if (myTable[hash].getKey() == k)
				return myTable[hash].getValue();
			else if ((h1 % maxSize == hash && i != 0) || (myTable[hash].getKey() == NULL && !myTable[hash].isDeleted()))
				return -1;
			else
				i++;
		}
	}

	bool deleteSlot(int k) {
		int h1 = hash_1(k);
		int h2 = hash_2(k);
		int hash, i = 0;
		while (true) {
			hash = (h1 + (i * h2)) % maxSize;
			if (myTable[hash].getKey() == k) {
				myTable[hash].setKey(NULL);
				myTable[hash].setValue(NULL);
				myTable[hash].setDeleted(true);
				return true;
			}
			else if ((h1 % maxSize == hash && i != 0) || (myTable[hash].getKey() == NULL && !myTable[hash].isDeleted()))
				return false;
			else
				i++;
		}
	}
};