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
	ListNode *Partitionlist(ListNode *head, int x) {
		ListNode *tail=head;
		int carry = 0;
		ListNode *ntrleft = new ListNode(0);
		ntrleft->next = head;
		head = ntrleft;
		for (tail = head; tail->next!= nullptr; tail = tail->next) {
			carry++;
			//tail = cur;
		}
	//	tail->next = nullptr;
		
		for (int i=0; i<carry;  i++) {
            
			//ntrleft = ntrleft->next;
			//cur1 = ntrleft;
			if (ntrleft->next->val >= x) {
				tail->next = new ListNode(ntrleft->next->val);
			//	cur1->next = tail->next;
			    tail=tail->next;
				//tail = ntrleft;
				ntrleft->next = ntrleft->next->next;
			//	ntrleft = ntrleft->next;
			}
			else {
                ntrleft = ntrleft->next;
			}
        

		}
		return head->next;
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
	
	l3 = sl2.Partitionlist(lisnode1, m);
	cout << l3->val << endl;
	cout << l3->next->val << endl;
	cout << l3->next->next->val << endl;
	cout << l3->next->next->next->val << endl;
	cout << l3->next->next->next->next->val << endl;
	cout << l3->next->next->next->next->next->val << endl;
}