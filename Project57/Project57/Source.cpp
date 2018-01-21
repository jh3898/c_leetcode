#include<iostream>
#include<unordered_set>
#include<queue>
using namespace std;

class Solution {
public:
	int ladderLenth(string S, string S2, unordered_set<string> &dict) {
		queue<pair<string, int>> q;
		dict.insert(S2);
		q.push(make_pair(S,1));
		while (!q.empty()) {
			string s = q.front().first;
			int len = q.front().second;
			if (s == S2) return len;
			q.pop();
           vector<string> neighbors = makepair(s, dict);

			for (int i = 0; i < neighbors.size(); i++) {
				
				q.push(make_pair(neighbors[i],len+1)); 
			}

			
		}
		
          return 0;
	}
	vector<string> makepair(string S, unordered_set<string> &dict) {
		vector<string> ret;
		char c;
		for (int i = 0; i < S.size(); i++) {
			c = S[i];
			for (int j = 0; j < 26; j++) {
				if (c = 'a' + j) continue;
				S[i] = j + 'a';
				if (dict.find(S)!= dict.end()) {

					ret.push_back(S);
					dict.erase(S);
				}
			}
			S[i] = c;
		}
		return ret;
	}
};

int main() {
	Solution sl2;
	string start = "hit";
	string end = "cog";
	unordered_set<string> dict = { "hot", "dot", "dog", "lot", "log" };
	int i=sl2.ladderLenth(start,end,dict);
	cout << i << endl;

}

