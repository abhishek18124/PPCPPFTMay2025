// constraints : n <= 100

#include<iostream>

using namespace std;

void merge(int arr[], int s, int m, int e) {

	// arr[s...m] is sorted and arr[m+1...e] is sorted

	// in this fn we want to merge the two sorted subarrays

	// such that arr[s...e] becomes sorted

	int i = s;
	int j = m + 1;
	int k = s;

	int temp[100]; // based on constraints

	while (i <= m and j <= e) {

		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		} else {
			temp[k] = arr[j];
			j++;
			k++;
		}

	}

	while (i <= m) {

		temp[k] = arr[i];
		i++;
		k++;

	}

	while (j <= e) {

		temp[k] = arr[j];
		j++;
		k++;

	}

	// at this point of time temp[s...e] is sorted

	for (int i = s; i <= e; i++) {
		arr[i] = temp[i];
	}

	// at this point of time arr[s...e] is sorted

}

void mergeSort(int arr[], int s, int e) {

	// base case

	if (s == e) {
		// f(s, s) = sort arr[s...s] = {arr[s]}
		return;
	}

	// recursive case

	// f(s, e) : sort arr[s...e] using the mergeSort algorithm

	int m = s + (e - s) / 2;

	// ask your friend to sort arr[s...m] and arr[m+1...e]

	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);

	// merge the two sorted subarrays arr[s...m] and arr[m+1...e]

	merge(arr, s, m, e);

}

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}