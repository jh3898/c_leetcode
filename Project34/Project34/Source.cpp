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
        bool PathSum(TreeNode *root,int sum) {
			TreeNode *path= nullptr;
		vector<vector<int>> s;
		//int level = 1;
		int target = 0;
	//	levelTraversal(root, target, sum);

		return levelTraversal(root, target, sum);
	}

	//cout << root->val << endl;
	//return BinS;

	bool levelTraversal(TreeNode *root, int target, int sum) {
	//	int target;

		if (root == nullptr) {
			if (target == sum) { return true; }
		    else { return false; }
		}
		
		//s[level - 1].push_back(root->val);
		//cout << root->val << endl;
		//cout << s.size() << endl;
		bool leftpart=levelTraversal(root->left,target+root->val, sum);
		bool rightpart=levelTraversal(root->right, target + root->val, sum);
		return leftpart || rightpart;

		// return s;

	}


};



int main() {

	TreeNode *root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(8);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	root->right->left = new TreeNode(13);
	root->right->right= new TreeNode(4);
	root->right->right ->right= new TreeNode(5);
	Solution sl2;
	//TreeNode newroot;
	vector<vector<int>> BinS;
	int sum=22;

	bool isPS;
	isPS= sl2.PathSum(root,sum);
	cout << isPS << endl;


}