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
	vector<int> BinaryTreePreorder(TreeNode *root) {
		vector<int> BinS;
		stack<const TreeNode *> s;
		const TreeNode *p = root;
		if (root != nullptr) {
			s.push(root);	
	   }
		while (!s.empty()) {
			while (p != nullptr) {
				s.push(p);
				p = p->left;
			 }
		//	const TreeNode *p = s.top();
			//s.pop();
			//BinS.push_back(p->val);

       if (p->right != nullptr) {
			s.push(p->right);
		//	cout << root->right->val<< endl;
		}
		else {
			const TreeNode *q = p;
			s.push(p);
		//	s.top();
			BinS.push_back(p->val);
			s.pop();
		}


	  }
        
		//cout << root->val << endl;
		return BinS;
	}


};



int main() {

	TreeNode *root= new TreeNode(1);
	root->right = new TreeNode(2);
	root->right->left = new TreeNode(3);
	Solution sl2;
	//TreeNode newroot;
	vector<int> BinS;
	BinS= sl2.BinaryTreePreorder(root);
	for (auto i : BinS) {
		cout << i << endl;
	}
	//for(;root ->)


}