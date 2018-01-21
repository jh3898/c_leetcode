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
	ListNode *SwapPairs(ListNode *head,int k) {

		ListNode *last = new ListNode(0);
		ListNode *pa = new ListNode(0);
		pa->next = head;
		head = pa;
		int m = 0;
		last = head->next;
		//	head = cur; // used to save the result head.
		//last = head; // used to get the last node
		ListNode *prev = last->next;

		for (; last->next->next != NULL; last = last->next) {
			//m++;



			last->next = prev->next;
			prev->next = last;
			pa->next = prev;
			pa = last;
			prev = last->next->next;

		} //get the length and last node


		  //last = last->next;
		prev->next = last;
		//	last->next = nullptr;
		pa->next = prev;


		return head->next;  //the 1st node is elmininated 
	}
};
int main() {
	Solution sl2;
	ListNode *lisnode1, *l3;
	int m = 3;
	lisnode1 = new ListNode(1);
	//lisnode1->val = 2;
	lisnode1->next = new ListNode(2);
	(lisnode1->next->next) = new ListNode(3);
	(lisnode1->next->next)->next = new ListNode(4);
	(lisnode1->next->next)->next->next = new ListNode(5);
	(lisnode1->next->next)->next->next->next = new ListNode(6);

	(lisnode1->next->next)->next->next->next->next = nullptr;

	l3 = sl2.SwapPairs(lisnode1);


	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	cout << l3->next->next->next->val << endl;
	cout << l3->next->next->next->next->val << endl;
	cout << l3->next->next->next->next->next->val << endl;
}