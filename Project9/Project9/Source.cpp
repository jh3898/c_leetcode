#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
class Solution
{
public:
	double ReversePolishNotation(vector<string> m0) {
		stack<string> RPN;
		int a, b,c;
		for (auto i :m0) {
			if (i[0] == '/' || '*') {
				a = stoi(RPN.top());
				RPN.pop();
				b = stoi(RPN.top());
				RPN.pop();
				if (i[0] == '/') {
                     c = b/a;
				     
				}
				else { c = b*a; 
				}
				RPN.push(to_string(c));
			}
			else
			{
				if (i[0] == '+' || '-') {
					a = stoi(RPN.top());
					RPN.pop();
					b = stoi(RPN.top());
					RPN.pop();
					if (i[0] == '+') {
						c = b + a;

					}
					else {
						c = b-a;
					}
					RPN.push(to_string(c));
				}
				else
				{
					RPN.push(i);
				}

			}

		}
		return stoi(RPN.top());

	}
};

int main() {

	Solution sl2;
	vector<string> m0 = { "2","1","+","3","*" };
	double Var;

	Var= sl2.ReversePolishNotation(m0);
	cout << Var << endl;
}