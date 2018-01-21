#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class solution {
public:
	vector<vector<char>> surrounded_regions(vector<vector<char>> S) {
		queue<char>  m;
		int s_r, s_c;
		s_r = S.size();
		s_c = S[0].size();

		m.push(S[0][0]);
		int i = 0, j = 0;
		while (!m.empty()) {
			char S0 = m.front();
			m.pop();
		//	is_surround(S0,i,j,S);
		//	i++;
		//	j++;
		}
		for (int i = 0; i < S.size(); i++) {
			for (int j = 0; j < S[0].size(); j++) {
				
					if (is_surround(S[i][j],i,j,S)) {
						S[i][j] = 'X';
					}
				      
			}
		}
		return S;
	}
	bool is_surround(char S0,int i,int j, vector<vector<char>> S) {
		if (S[i][j] != '0') { return false; }
		if (S[i - 1][j] != NULL && S[i - 1][j]== '0') {
			is_surround(S[i - 1][j], i - 1, j, S);
		}
		if (S[i + 1][j] != NULL && S[i + 1][j] == '0') {
			is_surround(S[i + 1][j], i + 1, j, S);
		}
		if (S[i][j-1] != NULL && S[i][j-1] == '0') {
			is_surround(S[i][j], i , j-1, S);
		}
		if (S[i][j+1] != NULL && S[i][j+1] == '0') {
			is_surround(S[i][j], i, j+1, S);
		}
		return false;
	}
};
int main() {
	solution sl2;
	vector<vector<char>> S = { {'X','X' ,'X' ,'X'},{ 'X','0' ,'0' ,'X' },{ 'X','X' ,'0' ,'X' },{ 'X','0' ,'X' ,'X' } };
	sl2.surrounded_regions(S);

}