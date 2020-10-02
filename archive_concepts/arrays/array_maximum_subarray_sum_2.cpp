#include<iostream>

using namespace std;

int main() {
	int arr[] = { -4, 1, 3, -2, 16, 2, -8, -9, 4 };
	int n = sizeof(arr) / sizeof(int);

	int cumSum[1000] = {0};

	cumSum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		cumSum[i] = cumSum[i - 1] + arr[i];
	}

	int left = -1;
	int right = -1;

	int maximumSum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int currentSum = 0;
			currentSum = cumSum[j] - cumSum[i - 1];
			if (currentSum > maximumSum) {
				maximumSum = currentSum;
				left = i;
				right = j;
			}
		}
	}
	cout << "maximumSum Subarray is ";
	for (int i = left; i <= right; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\n";
	cout << "maximumSum is " << maximumSum << endl;
}