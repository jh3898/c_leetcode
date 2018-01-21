#include<iostream>
#include<vector>
#include<string>
using namespace std;

class solution {
public:
	vector<vector<string>> partition(string S) 
	{
		vector<string> S1;
		vector<vector<string>> ST;
		//size_t t1, t2;
		dfs(S,S1,ST,0,1);
	
		return ST;

	}
	void dfs(string &S, vector<string> &S1, vector<vector<string>> &ST, size_t t1, size_t t2) {
	int k = 0;
	if (t2== S.size()) {
		if (ispara(t1, t2-1, S)) {
			S1.push_back(S.substr(t1,t2-t1));
			ST.push_back(S1);
		    S1.pop_back();
		//	for (auto i : S1) {
		//		cout << i<<' ';
		//	}
		//	cout << endl;

		}
		
		return;
	}

		dfs(S, S1, ST, t1, t2+1);
			if (ispara(t1, t2-1, S)) {
                S1.push_back(S.substr(t1,t2-t1));
				dfs(S, S1, ST, t2, t2+1);
				S1.pop_back();
			}
			
			


	}

	bool ispara(int i, int k, string S) {
		//string m= S.substr(i,k-i);
	//	string m1 = m;
		while (i<=k && S[i]==S[k]) {
			
                i++;
				k--;

			}

          return i>= k;
	}
	

};

int main() {
	string s = "aaab";
	vector<vector<string>> m;
	solution sl2;
	m= sl2.partition(s);
	for (auto i : m) {
		for (auto j : i) {
			cout << j <<' ';
		}
		cout << endl;
	}


}