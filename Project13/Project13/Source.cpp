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
	ListNode *addTwoNumbers(ListNode *L1, ListNode *L2) {
		ListNode dummy(-1); //header node
		int carry = 0;
		ListNode *prev = &dummy;
		for (ListNode *pa = L1, *pb = L2;
			pa != nullptr || pb != nullptr;
			pa = pa == nullptr ? nullptr : pa->next,
			pb = pb == nullptr ? nullptr : pb->next,
			prev = prev->next) {
			const int ai = pa == nullptr ? 0 : pa->val;
			const int bi = pb == nullptr ? 0 : pb->val;
			const int value = (ai + bi + carry) % 10;
			carry = (ai + bi + carry) / 10;
			prev->next = new ListNode(value); //
		}
		if (carry > 0)
			prev->next = new ListNode(carry);
		return dummy.next;



	}
};
int main() { 
	Solution sl2;
	ListNode *lisnode1,*lisnode2,*l3;
	lisnode1 = new ListNode(2);
	//lisnode1->val = 2;
	lisnode1->next = new ListNode(4);
	(lisnode1->next->next) = new ListNode(3);
	(lisnode1->next->next)->next = nullptr;
	lisnode2 = new ListNode(5);
	(lisnode2->next)= new ListNode(6);
	(lisnode2->next->next)= new ListNode(4);
	(lisnode2->next->next)->next = nullptr;
	l3=sl2.addTwoNumbers(lisnode1, lisnode2);
	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	//cout << l3->next->next->next->val << endl;
	ListNode dummy(1);
	ListNode alice(2);

}