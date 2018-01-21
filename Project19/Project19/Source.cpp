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
	ListNode *remove_Duplicate(ListNode *head) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		ListNode *cur = new ListNode(0);
		cur = head->next;
	//	head = cur; // used to save the result head.
	//	ListNode *last = head; // used to get the last node
		ListNode *prev = cur;
		cur = cur->next;

		
		int n = 0; //length of the list
		for (; cur->next != NULL; cur = cur->next) {
			if (cur->val == prev->val) {
				prev->next = cur->next;
				//delete cur;
				cur = prev;
			}
			else
			{
				prev = prev->next;
			}
			
			} //get the length and last node

		
		return head->next;  //the 1st node is elmininated 
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
	//(lisnode1->next->next)->next->next->next->next->next = new ListNode(8);
	(lisnode1->next->next)->next->next->next->next->next = nullptr;

	l3 = sl2.remove_Duplicate(lisnode1);
	cout << l3->val << endl;
	for (; l3->next != nullptr; l3=l3->next) {
		cout << l3->val << endl;

	}
	
	//cout << l3->val << endl;
	//cout << l3->next->val << endl;
	//cout << l3->next->next->val << endl;
	//cout << l3->next->next->next->val << endl;
	//cout << l3->next->next->next->next->val << endl;
	//cout << l3->next->next->next->next->next->val << endl;
}