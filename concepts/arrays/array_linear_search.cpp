#include<iostream>

using namespace std;
//linear search
int main() {
	int a[10] = {1, 2, 3, 5, 6, 11, 12, 34, 80, 81};
	int number = 11;
	int n = sizeof(a) / sizeof(int);
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == number) {
			cout << "Number found at : " << i << endl;
			break;
		}
	}
	if (i == n) {
		cout << "Number is not found" << endl;
	}
}