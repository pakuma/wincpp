#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(): val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct Compare
{
	bool operator()(const ListNode* l, const ListNode* r) {
		return l->val > r->val;
	}
};

class MergeKSortedList {
public:
	ListNode* mergeKList(vector<ListNode*>& lists) {

	}
};

int main() {

}