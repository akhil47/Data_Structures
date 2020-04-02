#include<algorithm>
#include<iostream>
class SuffixArray {
private:
	int len, *SA, *Rank, *tempRank;
	int m, *freq, *tempSA;
	/*
		Last Updated : 25-11-17
		-------------------------------------------------------------------------------------------------------------------------------------------
		Variable	Description
		--------	---------------------------------------------------------------------------------------------------------------------------
		len		->	Length of the String, also represent the length of Suffix Array i.e. the no.of suffixes are equal to string length.
		SA		->	Stores the indexes of each suffix in lexicographically sorted order.
		Rank		->	Used to specify rank for each suffix for sorting in lexicographical order.
		tempRank	->	Used as temporary storage for Ranks of suffixes while they are under assignment state.
		m		->	Holds the maximum value for assignment of memory.
		freq		->	Stores the Count of Ranks assigned to SuffixArray, Provides it as a tool for Radix Sort Bucket Allotment.
		tempSA		->	Used by Radix Sort as auxiliary array while sorting.
		--------	---------------------------------------------------------------------------------------------------------------------------
		Complexity Analysis
		-------------------------------------------------------------------------------------------------------------------------------------------
		Time : O(n log n)

		O(log (n))	For Comparisons of Characters
		O(2n)	For Sorting using Radix Sort(Constant is 2 since its 2 - Pass radix Sort)

		Space: O(n + k) or O(2n)
		-----------------------------------------------------------------------------------------------------------------------------------
	*/

	void buildSA(const char * S) {
		for (int i = 0; i < len; i++) SA[i] = i, Rank[i] = S[i];   //Initial Rank Assignment and Preparation of Suffix Array for Sorting.
		for (int k = 1; k <= len; k <<= 1) {
			/*
				Sorting is done in the increments of "k" {k: 1, 2, 4, ....2^i}, it indicates sorting by first "One" character then by
				first "Two" Characters, "Four" Characters so on, until we have reached a length such that we can be sure all the 
				strings are themselves sorted.

				radixSort is performed in Two Pases:
				In First Pass we sort according to the "NextRank" i.e. Rank[SA[i] + k] which means comparing a Suffix with another Suffix
				next to it after "k" index positions, to follow above principle.
				In Second Pass we sort according to the individual ranks assigned i.e. Rank[SA[i]] to get final sorted order.
			
			*/
			radixSort(k);
			radixSort(0);

			int r = 1;			//We Start Assigning Ranks from "1" Since "0" is kept behind for case: SA[i] + k > len
			tempRank[SA[0]] = r;

			for (int i = 1; i < len; i++) {
				if (Rank[SA[i]] == Rank[SA[i - 1]] && Rank[SA[i] + k] == Rank[SA[i - 1] + k]) tempRank[SA[i]] = r;
				else tempRank[SA[i]] = ++r;
			}
			for (int i = 0; i < len; i++) Rank[i] = tempRank[i];

			//If Rank of last Suffix in the array is equal to len of string, it indicates all suffixes are sorted because
			if (Rank[SA[len - 1]] == len) break;
		}
	}
	void radixSort(int k) {
		int Vi = 0;
		memset(freq, 0, sizeof(int) * m), memset(tempSA, 0, sizeof(int)* m);
		for (int i = 0; i < len; i++) freq[(SA[i] + k) < len ? Rank[SA[i] + k] : 0] += 1;
		for (int i = 0; i < m; i++) {
			int temp = freq[i];
			freq[i] = Vi;
			Vi += temp;
		}
		for (int i = 0; i < len; i++) tempSA[freq[SA[i] + k < len ? Rank[SA[i] + k] : 0]++] = SA[i];
		for (int i = 0; i < len; i++) SA[i] = tempSA[i];
	}
public:
	SuffixArray(const char* S, int l) {
		len = l;
		m = std::max(300, (len * 2));				//The memory Required will be atleast (n + k) or 2n.
		SA = new int[m]();					//Since the rank comparisons may go till n + k  where   n <= k
		Rank = new int[m]();
		tempRank = new int[m]();
		freq = new int[m]();
		tempSA = new int[m]();
		buildSA(S);
	}
	~SuffixArray() {
		delete[] SA;
		delete[] Rank;
		delete[] tempRank;
		delete[] tempSA;
		delete[] freq;
	}
	int* getSA() {
		int *temp = new int[len];
		for (int i = 0; i < len; i++) temp[i] = SA[i];
		return temp;
	}
};