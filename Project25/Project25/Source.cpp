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
	vector<vector<int>> BinaryTreeLevelorder(TreeNode *root) {
		vector<vector<int>> s;
		int level=1;
		
		levelTraversal(root,level,s);
		
		return s;
		}

		//cout << root->val << endl;
		//return BinS;

		void levelTraversal(TreeNode *root,int level,vector<vector<int>> &s){
			if (root == nullptr) {
				return;
			}
			
			
			if (level > s.size()) s.push_back(vector<int> ());
            s[level-1].push_back(root->val);

		    cout << root->val<<endl;
			cout << s.size() << endl;
			levelTraversal(root->left, level + 1,s);
			levelTraversal(root->right, level + 1,s);

			// return s;

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
	vector<vector<int>> BinS;
	BinS = sl2.BinaryTreeLevelorder(root);
	


}