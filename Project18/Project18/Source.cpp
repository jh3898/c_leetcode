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
	ListNode *partition(ListNode *head, int x) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function
		ListNode *p = new ListNode(0);
		p->next = head;
		head = p; // used to save the result head.
		ListNode *last = head; // used to get the last node

		if (head == NULL) { return NULL; }
		if (head->next == NULL) { return head->next; }

		int n = 0; //length of the list
		while (last->next != NULL) { last = last->next; n++; } //get the length and last node

		while (n>0) {  // in case  of non-stop loop, count n.
			if (p->next->val < x) {  // val<x keep the node
				p = p->next;
				n--;
			}
			else {                  // val>=x move to last
				last->next = new ListNode(p->next->val);    // add node to the last
				last = last->next;
				p->next = p->next->next;                    //delete current node
				n--;
			}
		}
		return head->next;  //the 1st node is elmininated 
	}
};
int main() {
	Solution sl2;
	ListNode *lisnode1, *l3;
	int m = 3;
	lisnode1 = new ListNode(1);
	//lisnode1->val = 2;
	lisnode1->next = new ListNode(4);
	(lisnode1->next->next) = new ListNode(3);
	(lisnode1->next->next)->next = new ListNode(2);
	(lisnode1->next->next)->next->next = new ListNode(5);
	(lisnode1->next->next)->next->next->next = new ListNode(2);
	(lisnode1->next->next)->next->next->next->next = nullptr;

	l3 = sl2.partition(lisnode1, m);
	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	cout << l3->next->next->next->val << endl;
	cout << l3->next->next->next->next->val << endl;
	cout << l3->next->next->next->next->next->val << endl;
}