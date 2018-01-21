#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
class Solution
{
public:
	bool WordBreak(string s,unordered_map<string, bool>dict) {
		bool WB=false;
		for (int i = 1; i <= s.size(); i++) {
			cout << s.substr(0, i) << endl;
			cout << s.substr(i, s.size()) << endl;
			if (dict[s.substr(0, i)] && dict[s.substr(i, s.size())]) {
				WB = true;
				return WB;
				//dict[s];
			}

		}
		return WB;
	}
};
int main() {
	Solution sl2;
	string s = "leetcode";
	unordered_map<string, bool> dict = { {"leet",true},{"code",true} ,{"wuwu",false} };
	bool m;

	m= sl2.WordBreak(s, dict);
	cout << m << endl;

}