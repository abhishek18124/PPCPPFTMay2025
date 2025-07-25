#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 4, 2, 7, 6, 3, 5};
	int n = sizeof(arr) / sizeof(int);

	int k = 4;

	int i = 0; // to store the start of the window
	int j = 0; // to store the end of the window

	int w_sum = 0; // to store the window sum

	// compute the sum of 1st window

	while (j < k) {
		w_sum += arr[j];
		j++;
	}

	int max_sum = w_sum;   // to track the maximum window sum

	// compute the sum for the remaining windows

	while (j < n) {

		// slide the window

		w_sum -= arr[i];
		i++;
		w_sum += arr[j];

		// update ans

		max_sum = max(max_sum, w_sum);

		// continue the process

		j++;
	}

	cout << max_sum << endl;

	return 0;

}

