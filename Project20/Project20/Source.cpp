#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}

};
class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if (!head) return head;
		ListNode dummy(head->val + 1); // իङ㺰䌎 head ̼ऻࢢञ
		dummy.next = head;
		recur(&dummy, head);
		return dummy.next;
	}
private:
	static void recur(ListNode *prev, ListNode *cur) {
		if (cur == nullptr) return;
		if (prev->val == cur->val) { // ݏ䮓 head
			prev->next = cur->next;
			delete cur;
			recur(prev, prev->next);
		}
		else {
			recur(prev->next, cur->next);
		}
	}
};
int main() {
	Solution sl2;
	ListNode *lisnode1, *l3;
	int m = 3;
	lisnode1 = new ListNode(1);
	//lisnode1->val = 2;
	lisnode1->next = new ListNode(1);
	(lisnode1->next->next) = new ListNode(1);
	(lisnode1->next->next)->next = new ListNode(2);
	(lisnode1->next->next)->next->next = new ListNode(5);
	(lisnode1->next->next)->next->next->next = new ListNode(5);
	(lisnode1->next->next)->next->next->next->next = new ListNode(8);
	(lisnode1->next->next)->next->next->next->next->next = nullptr;

	l3 = sl2.deleteDuplicates(lisnode1);
	for (; l3->next != nullptr; l3 = l3->next) {
		cout << l3->val << endl;

	}

}