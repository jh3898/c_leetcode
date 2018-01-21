#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

class solution {
public:
	int Longest_consecutive_sequence(vector<int> T) {
		unordered_map<int, int> S;
		int max_S = 0,count=0;
		for (int i = 0; i < T.size(); i++) { S[T[i]] = 1; }
		for (int i = 0; i < T.size(); i++) {
			count = 0;
			for (int j = T[i]-1; S.find(j) !=S.end(); j--) {
				
					count++;
				//	cout << count << endl;

			}

			for (int j = T[i]; S.find(j) != S.end(); j++) {
				count++;

			}

			max_S = max(count, max_S);
			//cout << "max_S" << max_S << endl;



		}
		return max_S;

	}
};

int main() {
	vector<int> S = { 100,4,200,1,3,2 };
	solution sl2;
	int Len=0;
	Len=sl2.Longest_consecutive_sequence(S);
	cout << Len << endl;

}