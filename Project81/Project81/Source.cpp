#include<iostream>
#include<vector>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> result;
		int lev = 0;
		bfs(root, 1, result);
		return result;
	}
	void bfs(TreeNode* root, int lev, vector<vector<int>> &result) {
		if (root == nullptr) return;
		if (lev>result.size()) result.push_back(vector<int>());
		result[lev - 1].push_back(root->val);
		bfs(root->left, lev + 1, result);
		bfs(root->right, lev + 1, result);



	}

};
int main() {
	Solution sl2;
	TreeNode *root= new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);
	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);

	root->left->left = nullptr;
	vector<vector<int>> result;
	

	result= sl2.levelOrder(root);
	//result.push_back(vector<int>());
	//result.push_back(vector<int>());
	for (auto i : result) {
		for (auto j : i) {
           cout << j <<" ";
		}
		cout << " "<<endl;
	}

	cout << result.size();
	// cout << vector<int>();
}
