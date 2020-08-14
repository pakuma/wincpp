#include <iostream>
#include <vector>

using namespace std;

//  Binary Search Template I
class BinarySearch {
public:
	int binarySearchI(vector<int>& nums, int target);
	int binarySearchII(vector<int>& nums, int target);
	int binarySearchIII(vector<int>& nums, int target);
};

int BinarySearch::binarySearchI(vector<int>& nums, int target) {
	if (nums.size() == 0)
		return -1;
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}

int BinarySearch::binarySearchII(vector<int>& nums, int target) {
	if (nums.size() == 0)
		return -1;
	int left = 0;
	int right = nums.size();
	while (left < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < target) {
			left = mid + 1;
		} else {
			right = mid;
		}
	}
	cout << "Outside while loop " << endl;
	if (left != nums.size() && nums[left] == target) return left;
	return -1;
}

int BinarySearch::binarySearchIII(vector<int>& nums, int target) {
	if (nums.size() == 0)
		return -1;
	int left = 0;
	int right = nums.size() - 1;
	while (left + 1 < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			return mid;
		} else if (nums[mid] < target) {
			left = mid;
		} else {
			right = mid;
		}
	}
	cout << "Outside while loop " << endl;
	if (nums[left] == target) return left;
	if (nums[right] == target) return right;
	return -1;
}

int main() {
	BinarySearch bs;
	vector<int> v {1, 3, 4, 7, 10, 15, 20};
	int target = 10;
	cout << "BinarySearch Pattern I " << bs.binarySearchI(v, target) << endl;
	cout << "BinarySearch Pattern II " << bs.binarySearchII(v, target) << endl;
	cout << "BinarySearch Pattern III " << bs.binarySearchIII(v, target) << endl;

	return 0;
}