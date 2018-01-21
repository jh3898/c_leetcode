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
	ListNode *Reverselinkedlist(ListNode *head,int m, int n) {
		ListNode dummy(-1); //header node
		dummy.next = head;
		int carry = 0;
	//	ListNode *prev = &dummy;
        ListNode *prev = &dummy;
		ListNode *cur = new ListNode(0),*pre = new ListNode(0);
		for (int i = 0; i < m - 1; i++) {
			prev = prev->next;
		}
		cur = prev;
		pre = prev->next;
		prev = pre->next;
	///	for (int i = m-1; i < n - 1; i++) {
			//cur = pa;
	//		pre = pre->next;

	//	}
		for (int i = m-1 ; i < n-1 ; i++) {
			//cur = pa;
			
			pre->next = prev->next;

			cur->next = prev;
			prev->next = pre;
			//cur = pre;
			prev = pre->next;

		}
		//cur->next = pre->next;
		return dummy.next;
			


	}
};
int main() {
	Solution sl2;
	ListNode *lisnode1,  *l3;
	int m = 2, n = 4;
	lisnode1 = new ListNode(1);
	//lisnode1->val = 2;
	lisnode1->next = new ListNode(2);
	(lisnode1->next->next) = new ListNode(3);
	(lisnode1->next->next)->next = new ListNode(4);
	(lisnode1->next->next)->next->next = new ListNode(5);
	(lisnode1->next->next)->next->next->next = new ListNode(8);
	(lisnode1->next->next)->next->next->next->next = nullptr;
	
	l3 = sl2.Reverselinkedlist(lisnode1,m,n);
	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	cout << l3->next->next->next->val << endl;
	cout << l3->next->next->next->next->val << endl;

}