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
	vector<int> postorderTraversal(TreeNode *root) {
		vector<int> vals;
		if (root == NULL) {
			return vals;
		}

		vector<TreeNode*> nodes;
		TreeNode* pre = NULL;

		nodes.push_back(root);

		while (!nodes.empty()) {
			TreeNode* p = nodes.back();
			//如果不判断pre，我们就没法正确地出栈了
			if ((p->left == NULL && p->right == NULL) ||
				(pre != NULL && (pre == p->left || pre == p->right))) {
				vals.push_back(p->val);
				nodes.pop_back();
				pre = p;
			}
			else {
				//右子树压栈
				if (p->right != NULL) {
					nodes.push_back(p->right);
				}

				//左子树压栈
				if (p->left != NULL) {
					nodes.push_back(p->left);
				}
			}
		}

		return vals;
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
	BinS = sl2.postorderTraversal(root);
	for (auto i : BinS) cout << i << endl;


}