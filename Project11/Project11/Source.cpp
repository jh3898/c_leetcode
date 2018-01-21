#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
	int LongestSubstring(string & m) {
		string m_sub;
		int indx=0;
		int MLg=0;
		unordered_map<char, int> sub;
		for (int i = 0; i < m.size();i++) {
			//if (find(m_sub, c)) {}
		//	else { m_sub = m_sub + c; }
			
			if (sub.count(m[i]))
			{
				MLg = max(i - indx, MLg);
				indx = i;
				sub.clear();

			}
			sub[m[i]]++;


		}

		return MLg;
	}


};


int main() {
	string m="qpxrjxkltzymx";
	Solution SL2;
	int Leg;
	Leg=SL2.LongestSubstring(m);
	cout << Leg << endl;
	return 0;

}