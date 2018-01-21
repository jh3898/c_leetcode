#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class solution {
public:
	vector<int> next_permutation(vector<int> S){
		int k,j=0;
		k = S[S.size() - 1];
		for (int i = S.size()-2;i>=0;i--){
			if (S[i] < k) {
			    S[i + 1] = S[i];
				S[i] = k;
				return S;
			}
			k = S[i];
		}
		for(int i = S.size() - 1; i >= S.size()/2; i--) {
		// 	k = S[i];
			S[j] = S[i];
			S[i] = k;
			j++;
			k = S[j];
		}
		// sort(S);
		return S;

	}
};

int main() {
	solution sl2;
	vector<int> m = { 3,2,1 };
	vector<int> S;
	S= sl2.next_permutation(m);
	for (auto i : S) {
		cout << i << endl;
	}
}