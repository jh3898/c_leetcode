#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class solution {
public:
	string longest_substring(string &S) {
		string path;
		unordered_map<string, int> result;

		dfs(S,result,path,0,1);
	}
	void dfs(string S, unordered_map<string, int> result, string path, int m, int n) {
		if (n == S.size()) return;
		for (int i = m; i < n; i++) {
		//	result[S.substr[i]] ++;
			if (is_repeat() == false) {
                dfs(S,result,path,m,n+1);
			}
			dfs(S, result, path, n, n);
		}
		
	}
	bool is_repeat() {
		unordered_map<string, int> result;
		result[S.substr[i]] ++;
	}
};