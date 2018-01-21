#include<iostream>
#include<string>
#include<vector>

using namespace std;

class solution {
public:
	string Longest_palindrom(string S) {
		int n = S.size();
		vector<vector<bool>> f(n, vector<bool>(n, false));
		int maxs = 1, in = 0;
		
		for (int i = 0; i < n; i++) {
        f[i][i] = true;
			for (int j = 0; j < i; j++) {
				if (S[j] == S[i] && (i-j<2 || f[j+1][i - 1])) {
					f[j][i] = true;
					if (maxs < i - j+1) {
						maxs = i - j+1;
						in = j;
						cout <<"i:"<< S.substr(i) << endl;
						cout <<"j:"<< S.substr(j) << endl;
					}
				}


			}
		}
		return S.substr(in, maxs);
	}
};

	int main() {
		string S = "abacdcaba";
		string m;
		solution sl2;
		
			m=sl2.Longest_palindrom(S);
			cout << m << endl;


	}