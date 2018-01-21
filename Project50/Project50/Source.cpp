#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(nullptr){}
};

class Solution {
public:
	ListNode *addTwoNumbers(ListNode *A, ListNode *B) {
		ListNode *head1= nullptr, *head2 = nullptr, head3(-1), *C= nullptr;
		int m = 0;
		head1 = A;
		head2 = B;
		C= &head3;
		int value = 0;
		for (head1; head1->next != nullptr; head1 = head1->next, head2 = head2->next,C= C->next)
		{
			
            value = head1->val + head2->val+m;
			C->next = new ListNode(value);
			cout << "c" << value << endl;
			m = (C->val) / 10;
			
			//head2 = head2->next;
			
		}
		return head3.next;
	}
};

int main() {
	Solution sl2;
	ListNode *A = new ListNode(2) , *B= new ListNode(5), *C;
	//A->val = 2;
	//A->next->val = 4;
	A->next = new ListNode(4);
	A->next->next = new ListNode(3);
	//A->next->next->val = 3;
	A->next->next->next = nullptr;
	//B->val = 5;
	B->next = new ListNode(6);
	B->next->next = new ListNode(4);
	
	B->next->next->next = nullptr;
	C= sl2.addTwoNumbers(A,B);
	for (C; C->next != nullptr;C= C->next) {
		cout << C->val << endl;
	}

}