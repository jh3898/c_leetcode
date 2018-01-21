#include<cstdio>
#include<cstdlib>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(nullptr),right(nullptr){}
};
class Solution {
public:
	vector<int> Binary_tree_preorder(TreeNode *root) {
		vector<int> result;
		stack<TreeNode *>s;
		if (root != nullptr) s.push(root);

		while (!s.empty()) {
			const TreeNode *p = s.top();
			s.pop();
			result.push_back(p->val);


			if (p->right != nullptr) s.push(p->right);
			if (p->left != nullptr) s.push(p->left);


		}

			return result;
	}








};



int main() {
	Solution SL2;
	TreeNode *root=nullptr;
    root= new TreeNode(1);
	// root->val = 1;
	// root->val = 1;
	root->left =new TreeNode(2);
	root->right = new TreeNode(5);
	root->left->left = nullptr;
	root->left->right = new TreeNode(3);
	vector<int> m;
    m=SL2.Binary_tree_preorder(root);
	for (auto i : m)
	{
		 cout << i << endl;
	}





}