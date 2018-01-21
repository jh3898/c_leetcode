#include<iostream>

using namespace std;
struct ListNode {
	int value;
	ListNode *Next;
    ListNode(int x): value(x), Next(nullptr) {}
};

class solution {
public:
	ListNode * add_numbers(ListNode *A, ListNode *B) {
		ListNode dummy(-1);
		ListNode * prev = & dummy;
		int n = 0,m=0;
		for (ListNode *D = A; D != nullptr; D = D->Next,A= A->Next,B= B->Next,prev= prev->Next) {
			
			n= A->value + B->value;
			prev->Next = new ListNode((n +m)%10);
			m = n/10;
				

		}
		return dummy.Next;
	}
};
int main() {
	solution sl2;
	ListNode * A,* B ;
	A = new ListNode(2);
	A->Next = new ListNode(4);
	A->Next->Next = new ListNode(3);
	A->Next->Next->Next = nullptr;
	B = new ListNode(5);
	B->Next = new ListNode(6);
	B->Next->Next = new ListNode(4);
	B->Next->Next->Next = nullptr;
	ListNode *C;
	C= sl2.add_numbers(A,B);
	cout << C->value << endl;
	cout << C->Next->value << endl;
	cout << C->Next->Next->value << endl;
}