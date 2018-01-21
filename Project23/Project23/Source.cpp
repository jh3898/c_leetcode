#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;


class LRUCache {
public:
struct Node {
	int val;
	int key;
	Node *next;
	Node *prev;
	Node(int k, int v) : key(k),val(v){}

};

LRUCache(int capacity) {
	m_capacity = capacity;

}

int get(int key) {
	if (m_map.find(key) == m_map.end())
		return -1;
	MoveToHead(key);
	return m_map[key]->val;

}
void set(int key, int value) {
	if (m_map.find(key) == m_map.end()) {

	}
}

private:
	unordered_map<int, list<Node>::iterator> m_map;
	list<Node> m_LRU_cache;
	int m_capacity;

	void MoveToHead(int key) {
		// Move key from current location to head
		auto updateEntry = *m_map[key];
		m_LRU_cache.erase(m_map[key]);
		m_LRU_cache.push_front(updateEntry);
		m_map[key] = m_LRU_cache.begin();

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