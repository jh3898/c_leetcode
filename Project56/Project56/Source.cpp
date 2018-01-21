#include<iostream>
#include<vector>

using namespace std;

class solution {
public:
	vector<vector<string>> Palindrome_partitioning(string &S) {
		vector<vector<string>> result;
		vector<string> path;
		dfs(S,path,result,0);
		return result;
	}

	void dfs(string &S, vector<string>& path, vector<vector<string>> &result,int start) {
		if (start== S.size()) {
			result.push_back(path);
			return;
		}
		for(int i= start;i < S.length();i++)
			if (ispalindrome(S, start, i)) {
				path.push_back(S.substr(start,i-start));
				dfs(S,path,result,start);
				path.pop_back();
			}


	}
	bool ispalindrome(string &S, int start,int end) {
		while (start <= end) {
			if (S[start] != S[end]) {
				return false;
			}
			start++;
			end--;
		}
		return true;

	}


};

int main() {
	solution sl2;
	vector<vector<string>> m;
	string S = "aab";
	m=sl2.Palindrome_partitioning(S);
	

}
