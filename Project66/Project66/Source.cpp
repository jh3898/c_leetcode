#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
	vector<int> two_sum(int m, vector<int> S) {
		unordered_map<int,int> path;
		pair<int,int> result;
		path[m- S[0]] =0;
		for (int i = 1; i < S.size(); i++) {
			if (path.find(S[i]) != path.end() & path[S[i]]>i) {
				result.push_back(S[i]);
			}
			else {
				path[m-S[i]] = i;
			}
		}
		return result;
	}
};

int main() {
	Solution sl2;
	vector<int> S = { 1,2,3,6,8 };
	vector<int> result;
	int m = 9;
	result= sl2.two_sum(m, S);
	for (auto i : result) {
		cout << i << endl;
	}

}