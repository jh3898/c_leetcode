#include<iostream>
#include<stack>
#include<vector>
#include<string>

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
	vector<vector<int>> BinaryTreePath(TreeNode *root) {
		vector<string> path;
		vector<int> s;
		levelTraversal(root,path,s);

		return path;


	}

	//cout << root->val << endl;
	//return BinS;

	void levelTraversal(TreeNode *root, vector<string>& path,vector<int>& path1) {
		//	int target;

		if (root == nullptr) {

			
			//path1.pop_back();
			//	return true;
			return;
		}
		path1.push_back(root->val);
		if (root->left == nullptr && root->right == nullptr)
			
		{
			//path.push_back(path1);
			return;
		}
				
			if (root->left != nullptr) {
                 levelTraversal(root->left, path, path1);
				 path1.pop_back();
			}
		
			if (root->right != nullptr) {
				levelTraversal(root->right, path, path1);
				path1.pop_back();
			}

		// return s;

	}
	string generatePath(vector<int> path1) {
		string s;
		for (int i = 0; i < path1.size(); i++) {
			 to_string(path1[i]);
		}

   }

};



int main() {

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->right= new TreeNode(5);

	Solution sl2;
	//TreeNode newroot;
	vector<vector<int>> BinS;
	

	//bool isPS;
	BinS=sl2.BinaryTreePath(root);
	for (auto i : BinS) {
		cout << ' ' << endl;
		for (auto j : i) {
             cout << j ;
		}
	}
	


}