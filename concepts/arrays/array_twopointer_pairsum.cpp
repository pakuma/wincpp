#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int arr[] = {1, 3, 7, 5, 11, 10, 13, 12};
	int n = sizeof(arr) / sizeof(int);
	int s = 16;

	sort(arr, arr + n);

	int i = 0;
	int j = sizeof(arr) / sizeof(int) - 1;

	while (i < j) {
		int current = arr[i] + arr[j];

		if (current > s) {
			j--;
		} else if (current < s) {
			i++;
		} else if (current == s) {
			cout << "a " << arr[i] << ", b " << arr[j] << endl;
			i++;
			j--;
		}
	}
}