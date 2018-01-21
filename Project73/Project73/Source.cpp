#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string m;
		int k=0;
		for (int i = 0; i<strs.size(); i++) {
			//strs[1]
			for (int j = 0; j < strs[0].size(); j++) {

				if (strs[i][j] != strs[0][j] || j>= strs[i].size()) {
					return strs[0].substr(0, j );
					}
			//	k++;

			}
			


		}
		return strs[0];
	}
};


int main() {
	Solution sl2;
	vector<string> S = { "abcf","abcde","abcdg" };
	string m;
	m= sl2.longestCommonPrefix(S);
	cout << m << endl;

	
}