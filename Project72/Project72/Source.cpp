#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> path;
		string X;
		int n = digits.size()-1;
		vector<string> S = { "","abc","def","ghi" };
		dfs(digits, S,0,path,"");
		return path;
	}
	void dfs(string &digits, vector<string> S, int start, vector<string> &path, string X) {
		//	string X;
		if (start == digits.size()) {
			path.push_back(X);

			return;
		}

		for (auto i: S[digits[start] - '0']) {
			cout << digits[start] - '0' << endl;
			//cout << i << endl;
				dfs(digits, S, start + 1, path, X+i);
			}
		}
	
};


	int main() {
		Solution sl2;
		string m = "23";
		vector<string> S;
		S = sl2.letterCombinations(m);
		for (auto i : S) {
			//cout << i << endl;
		}
	}