#include<iostream>
#include<stack>
using namespace std;
class Solution
{
public:
	bool isValid(string Istr) {
		string m0 = "[({";
		string m1 = "])}";
		string m3;
		int found;
		stack<char> j_s;
		for (auto c:Istr) {
			// m3 = Istr[i];
		//	if (Istr[i] == '[' || Istr[i] == '(' || Istr[i] == '{') {
			if (m0.find(c) != string::npos) {
				j_s.push(c);
				
			}
			else {
				found = m1.find(c);
				if (j_s.empty() || j_s.top() != m0[found] ) {
					return false;
				}
				else { j_s.pop(); }

				
			}
			
		}
		return j_s.empty();
	}



};


int main() {
	Solution sl2;
	string Istr="[](){}";
	bool m;

	m= sl2.isValid(Istr);
	cout << m << endl;


}