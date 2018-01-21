#include<iostream>
#include<vector>
using namespace std;

class solution {
public:
	int Unique_pathII(vector < vector<int>> M) {
		int r = M.size(), l = M[0].size();
		vector<int> Path(l,0);
		Path[0] = 1;
		for (int i = 0; i < r; i++) {
			for (int j = 1; j < l; j++) {
				if (M[i][j] == 1) {
					Path[j] = 0;

				}
				else {Path[j] = Path[j] + Path[j - 1];}
				

			}
		}
		return Path[l-1];
	}

};

int main() {
	solution sl2;
	int n = 0;
	vector < vector<int>> S = {{0,0,0},{0,1,0},{0,0,0} };
	n= sl2.Unique_pathII(S);
	cout << n << endl;


}