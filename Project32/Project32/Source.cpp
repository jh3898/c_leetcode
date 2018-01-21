#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
	vector<int> maximumSubarray(vector<int> A) {
		int k, j,sum,sumt;
		sum = A[0];
		for (int i = 1; i < A.size(); i++)
			//sum += A[i];
			if (sum <= A[i]) {
				sum = A[i];
				k = i;
			}
			else {
				//sumt = max(sum, sumt);
				sum += A[i];
				//j = i;
			}
			sumt = max(sum, sumt);

		
	}


};



int main() {


	Solution sl2;
	//TreeNode newroot;
	vector<int> BinS;
	BinS = sl2.BinaryTreeLevelorder(root);



}