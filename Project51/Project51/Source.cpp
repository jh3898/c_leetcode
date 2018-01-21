#include<iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class solution {
public:
	ListNode *reversed_linked_list(ListNode *A, int m, int n){
		ListNode *B=A,*C=A;

		for (int i = 0; i < m-1; i++) {
			B = B->next;
		}
        ListNode *prev;
		ListNode *bac;
		prev = B;
		B = B->next;
		bac=B->next ;
		
		// prev->next = C;
		for (int i = 0; i < n - m; i++) {

			prev->next = bac;
			B->next = bac->next;
			bac->next = B; 
			bac = B->next;


			//bac->next = B;
		//	B->next = prev;
		//	prev->next = bac;
		//	prev->next = C->next;
		}
		return A;
	}

	
};
int main() {
	solution sl2;
	ListNode *A = new ListNode(1),  *C;
	//A->val = 2;
	//A->next->val = 4;
	A->next = new ListNode(4);
	A->next->next = new ListNode(3);
	A->next->next->next = new ListNode(2);
	A->next->next->next->next = new ListNode(5);
	//A->next->next->val = 3;
	A->next->next->next ->next->next= nullptr;
	//B->val = 5;
	
	int m = 2, n = 4;
	C = sl2.reversed_linked_list(A, m,n);
	for (C; C->next != nullptr; C = C->next) {
		cout << C->val << endl;
	}

}