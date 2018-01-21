#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
	int maxEnvelopes(vector<pair<int, int>>& envelopes) {
		int n = envelopes.size();
		sort(envelopes.begin(), envelopes.end());
		for (int i = 0; i < n; i++) {
			cout << envelopes[i].first << "," << envelopes[i].second << endl;
		}
		int maxlen = 0, len = 1;
		int f = envelopes[0].first, s = envelopes[0].second;
		vector<int> fm(n);
		fm[0] = 1;
		for (int i = 1; i< n; i++) {

			if (envelopes[i].first>f && envelopes[i].second>s) {
				len++;
				fm[i] = len;
			}
			else {
				for (int j = i - 1; j >= 0; j--) {
					if ((envelopes[i].first>envelopes[j].first && envelopes[i].second>envelopes[j].second))
					{
						fm[i] = fm[j] + 1;
						len = fm[i];
						break;
					}
					else 
					{ fm[i] = fm[j];
					 len = fm[i];
					}
				}



			}


			f = envelopes[i].first;
			s = envelopes[i].second;

		}
		//    maxlen= max(fm);
		return len;
	}
};

int main() {
	Solution sl2;
	vector<pair<int, int>> S;
	S = { {1, 15},{7, 18},{7, 6},{7, 100},{2, 200},{17, 30},{17, 45},{3, 5},{7, 8},{3, 6},{3, 10},{7, 20},{17, 3},{17, 45} };
	//S = { {5,4},{6,4},{6,7},{2,3} };
	int m;
	m=sl2.maxEnvelopes(S);
	cout<< m << endl;

}