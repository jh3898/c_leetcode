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
	ListNode *rotate_list(ListNode *head,int k) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		ListNode *last = new ListNode(0);
		int m = 0;
		//last= head->next;
		//	head = cur; // used to save the result head.
			last = head; // used to get the last node
			ListNode *prev = last;
	
		for (; last->next != NULL; last = last->next) {
			m++;

		} //get the length and last node
		last->next = head;
		
		for (int i=0; i<k;i++) {
			
				prev = prev->next;
			

		} //get the length and last node


		return prev;  //the 1st node is elmininated 
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

	l3 = sl2.rotate_list(lisnode1, m);


	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	cout << l3->next->next->next->val << endl;
	cout << l3->next->next->next->next->val << endl;
	cout << l3->next->next->next->next->next->val << endl;
}