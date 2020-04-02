#include <iostream>
#include <bits/stdc++.h>
class SparseTable {
private:
	int maxSize;
	int ** table;

	int fCompute(int i, int j) {
		if (table[i][j - 1] < table[i + (1 << j - 1)][j - 1])
			return table[i][j - 1];
		else return table[i + (1 << j - 1)][j - 1];
	}
	int fQuery(int i, int len, int k) {
		return std::min(table[i][k], table[i + (len - (1 << k))][k]);
	}
public:
	SparseTable(int n) {
		maxSize = n;
		int k = log10(n) / log10(2);
		table = new int *[maxSize];
		for (int i = 0; i < maxSize; i++) table[i] = new int[k];
	}
	void constructTable(int *data) {
		for (int i = 0; i < maxSize; i++) table[i][0] = data[i];
		for (int j = 1; (1 << j) <= maxSize; j++) {
			for (int i = 0; i + ((1 << j) - 1) < maxSize; i++)
				table[i][j] = fCompute(i, j);
		}
	}
	int getValue(int i, int j) {
		int len = (j - i) + 1;
		int k = log10(len) / log10(2);
		return fQuery(i, len, k);
	}
};
