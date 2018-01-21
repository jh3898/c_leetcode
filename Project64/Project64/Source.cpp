#include<iostream>
#include<vector>
using namespace std;


class solution {
public:
	vector<vector<char>>  N_queens(int S) {
		int j = 0;
		vector<char> p1;
		vector<vector<char>> path;
		dfs(0,0,S,p1,path);
		
		return path;

	}
	void dfs(int i,int j, int S, vector<char> &p1, vector<vector<char>> &path) {
		vector<int> m00(S,0);
		if (i == S) {
			return;
		 }

		  for (int j = 0; j < S; j++) {
			  vector<char> m(S, '.');
			  m[j] = 'Q';
			  path.push_back(m);
			  m00[i] = j;
		      if (isvalid(i,j,m00)) {
				  dfs(i + 1, j, S, p1, path);
			  }
			  path.pop_back();
		  }
		  return; 

	}
	bool isvalid(int i,int j,vector<int> m00) {
		for (int n = 0; n < i; n++) {
			if (m00[n] == j || i-n == j-m00[n]) {
				return false;
			  }
		}

		return true;
	}

};
int main() {
	solution sl2;
	vector<vector<char>> n;;
	n=sl2.N_queens(5);
	for (auto i : n) {
		for (auto j : i) {
           cout << j;
		}
		cout << endl;
	}
	
}