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
	void flatten(TreeNode *root) {
		if (!root) {
			return;
		}

		vector<TreeNode *> ns;
		TreeNode dummy(0);

		TreeNode* n = &dummy;

		ns.push_back(root);

		while (!ns.empty()) {
			TreeNode* p = ns.back();
			ns.pop_back();

			//??????
			n->right = p;
			n = p;


			//?????
			if (p->right) {
				ns.push_back(p->right);
				p->right = NULL;
			}

			//?????
			if (p->left) {
				ns.push_back(p->left);
				p->left = NULL;
			}
		}
	}
};





int main() {

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(5);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(4);
	root->right->right = new TreeNode(6);
	Solution sl2;
	//TreeNode newroot;

	
	 sl2.flatten(root);
	 cout << root->val;
	 cout << root->right->val;
	 cout << root->right->right->val;
	 cout << root->right->right->right->val;
	 cout << root->right->right->right->right->val;
	 cout << root->right->right->right->right->right->val;
}