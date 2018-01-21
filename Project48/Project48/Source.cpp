#include<iostream>
#include<unordered_map>

using namespace std;
class solution {
public:
	vector<int> two_sum(vector<int> S, int tar) {
		unordered_map<int, int> T;
		for (int i = 0; i < S.size(); i++)
		{
			T[S[i]] = i;
		}
		for (int i = 0; i < S.size(); i++)
		{
			if (T.find(tar - S[i]) != T.end() && i < T[tar - S[i]]) {
				return{ T[S[i]],T[tar - S[i]] };
			}
			
		}
		return {};
	}
};

int main() {
	solution sl2;
	vector<int> S={2, 7, 11, 15};
	int target = 9;
	vector<int> m;
	m=sl2.two_sum(S,target);
	for (auto i : m) {
		cout << i << endl;
	}
}