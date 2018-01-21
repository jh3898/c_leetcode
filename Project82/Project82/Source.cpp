#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<unordered_map>
using namespace std;


class Solution {
public:
	vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
		int a1 = accounts.size();
		int a2 = accounts[0].size();

		vector<vector<string>> S(a1, vector<string> (a2,""));
		unordered_map<string, int> mm;
		int n = 0;
		bool TM = false;
		S[0]=accounts[0];
		for (int j = 1; j<accounts[0].size(); j++) {
			mm[accounts[0][j]] = 1;
		}
		for (int i = 1; i<accounts.size(); i++) {
			vector<string> A = accounts[i];
			TM = false;
			for (int j0 = 1; j0<accounts[i].size(); j0++) {
				if (mm[A[j0]] != 0) {
					TM = true;
					for (int j = 1; j<accounts[i].size(); j++) {
						if (mm[A[j]] == 0) S[mm[A[j0]] - 1].push_back(A[j]);
					}
				}
			}
			if (TM == false) {
				n++;
				S[n] = accounts[i];
				for (int j = 1; j<accounts[i].size(); j++) {
					mm[A[j]] = i + 1;
				}
			}



		}
		return S;
	}
};

int main() {
	Solution sl2;
	vector<vector<string>> S;
	vector<vector<string>> SS;
	vector<string> S0,S1,S2;
	S0.push_back("John");
	S0.push_back("johnsmith@mail.com");
	S0.push_back("john00@mail.com");
	S.push_back(S0);
	S1.push_back("John");
	S1.push_back("johnnybravo@mail.com");
	S.push_back(S1);
	S2.push_back("John");
	S2.push_back("johnsmith@mail.com");
	S2.push_back("john_newyork@mail.com");
	S.push_back(S2);
	//S[1][0] = "John";
	//S[1][1] = "johnnybravo@mail.com";
	SS= sl2.accountsMerge(S);
	for (auto i : SS) {
		for (auto j : i) {
			cout << j <<" ";
		}
		cout << endl;
	}

}