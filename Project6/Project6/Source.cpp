#include<iostream>
#include<stack>
#include<algorithm>
#include"add_h.h"
using namespace std;
class Solution {
public:
	int LongestValidParenthesis(const  string& s) {
		stack<int> m;
		int max_len = 0, last = -1; // the position of the last ')'
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
                    m.push(i);


			}
			else
			{
				if (m.empty()) {
					last = i;
				}
				else
				{
					m.pop();
					if (m.empty()) {
						max_len = max(max_len, i - last);
					}
					else {
						max_len = max(max_len, i- m.top());
					}

					}
				}
			}
            return max_len;
		}

	
};







int main() {
	string Istr= "()())()()()(";
	int m;

	Solution sl2;
	m=sl2.LongestValidParenthesis(Istr);






	std::cout << "The longest parenthese is:" << m << std::endl;
	return 0;
}