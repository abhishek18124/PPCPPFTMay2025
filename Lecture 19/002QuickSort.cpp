// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int arr[], int s, int e) {

	// partition the arr[s...e] around the pivot element i.e. arr[e]

	int pivot = arr[e];

	int j = s;
	int i = s - 1;

	while (j < e) {

		if (arr[j] < pivot) {

			// put arr[j] in the left partition

			i++;
			swap(arr[i], arr[j]);
			j++;

		} else {

			// arr[j] > pivot

			// put arr[j] in the right partition

			j++;

		}

	}

	swap(arr[e], arr[i + 1]);
	return i + 1; // i+1 represents idx of pivot

}

void quickSort(int arr[], int s, int e) {

	// base case

	if (s == e) return; // optional

	if (s > e) return; // mandatory

	// recursive case

	// f(s, e) : sort arr[s...e] using the quickSort algorithm

	int pidx = partition(arr, s, e);
	quickSort(arr, s, pidx - 1);
	quickSort(arr, pidx + 1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}