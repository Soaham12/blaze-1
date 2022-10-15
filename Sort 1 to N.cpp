// CPP program to test whether array
// can be sorted by swapping adjacent
// elements using boolean array
#include <bits/stdc++.h>
using namespace std;

// Return true if array can be
// sorted otherwise false
bool sortedAfterSwap(int A[], bool B[], int n)
{
	int i, j;

	// Check bool array B and sorts
	// elements for continuous sequence of 1
	for (i = 0; i < n - 1; i++) {
		if (B[i]) {
			j = i;
			while (B[j])
				j++;

			// Sort array A from i to j
			sort(A + i, A + 1 + j);
			i = j;
		}
	}

	// Check if array is sorted or not
	for (i = 0; i < n; i++) {
		if (A[i] != i + 1)
			return false;
	}

	return true;
}

// Driver program to test sortedAfterSwap()
int main()
{
	int A[] = { 1, 2, 5, 3, 4, 6 };
	bool B[] = { 0, 1, 1, 1, 0 };
	int n = sizeof(A) / sizeof(A[0]);

	if (sortedAfterSwap(A, B, n))
		cout << "A can be sorted\n";
	else
		cout << "A can not be sorted\n";

	return 0;
}
