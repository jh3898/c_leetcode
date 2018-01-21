#include<iostream>
#include<stack>
#include<vector>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode *next;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {

	}
};

class Solution {
public:
	vector<vector<int>> PathSum(TreeNode *root) {
		vector<vector<int>> BinS;
		stack<TreeNode *> s;
		TreeNode *q = nullptr;
		if (root == nullptr) {
			return BinS;
		}
		s.push(root);
		root->next = nullptr;
		while (!s.empty()) {
			TreeNode *p = s.top();
			s.pop();
			//p->next = nullptr;
			if (p->left != nullptr) {
				s.push(p->left);
				p->next = nullptr;
				//	p->left->next = p->right;
			}
			if (p->right != nullptr) {
				s.push(p->right);
				p->next = nullptr;
				//	p->right->next = p->next->left;
			}



		}
		s.push(root);
		




		//cout << root->val << endl;
		return BinS;
	}


};



int main() {

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	Solution sl2;
	//TreeNode newroot;
	vector<int> BinS;
	sl2.PathSum(root);
	//for (auto i : BinS) cout << i << endl;


	cout << root->val << endl;

	cout << root->left->next->val << endl;
	//	 cout << root->right->next->val << endl;
	cout << root->left->left->next->val << endl;
	cout << root->left->right->next->val << endl;
	cout << root->right->left->next->val << endl;
}