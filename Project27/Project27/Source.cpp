#include<iostream>
#include<stack>
#include<vector>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {

	}
};

class Solution {
public:
	vector<int> BinaryTreePostorder(TreeNode *root) {
		vector<int> BinS;
		stack<TreeNode *> s;
        TreeNode *q= nullptr;
		//const TreeNode *p = root;
		if (root == nullptr) {
			return BinS;
		}
            s.push(root);
		while (!s.empty()) {
		 	TreeNode *p = s.top();
			
			//  s.pop();
			//BinS.push_back(p->val);

			if ((p->right == nullptr && p->left == nullptr) ||	(q != nullptr && p->left==q || p->right==q)) {
				//const TreeNode *q;
				BinS.push_back(p->val);
				s.pop();
				//	cout << root->right->val<< endl;
				q = p;
			}
			else {
			//	const TreeNode *q = s.top();
			//	s.push(p);
				//	s.top();
				if (p->right != nullptr) s.push(p->right);
				if (p->left != nullptr) s.push(p->left);
				//BinS.push_back(q->val);
				//s.pop();
			}


		}

		//cout << root->val << endl;
		return BinS;
	}


};



int main() {

	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);
	Solution sl2;
	//TreeNode newroot;
	vector<int> BinS;
	BinS = sl2.BinaryTreePostorder(root);
	for (auto i : BinS) cout << i << endl;


}