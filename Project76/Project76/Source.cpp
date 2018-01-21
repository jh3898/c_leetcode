#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	bool isMath(const char *s, const char *p) {
		int s1 = strlen(s),p1=strlen(p);

		vector<vector<bool>> ap(s1,vector<bool>(p1,false));
		for (int i = 0; i < s1; i++) {


			for (int j = 0; j < p1; j++) {

				if (s[i] == p[j] && p[j]!= '.' && p[j] != '*' ) {
					ap[i][j] = ap[i-1][j-1];
				}
				else if (p[j] == '.') {
					ap[i][j] = ap[i-1][j-1];

				}
				else if (p[j]== '*') {
					ap[i][j] = true;


				}
			}
		}

		return ap[s1 - 1][p1 - 1];
	}
};

int main() {
	Solution sl2;
	const char A = 'aa';
	const char B = 'aa';
	bool T;
	T= sl2.isMath(&A,&B);
	cout << T << endl;


}

