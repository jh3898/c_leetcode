#include<iostream>
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode dummy(-1);
		dummy.next = head;
		int m = 0;
		for (ListNode *head2 = head; head2 != nullptr; head2 = head2->next) {
			m++;
		}
		for (int i = 0; i<m - n; i++) {
			head = head->next;
		}
		head->next = head->next->next;
	}
	return dummy.next;
};