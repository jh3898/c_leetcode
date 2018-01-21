#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	int largest_rectangle(vector<int> Hist) {
		stack<int> LRE;
		int area=0; 
		for (int i = 0; i < Hist.size(); i++) {
		//	area = max(min(Hist[i],Hist[i])*(i+1),area );

			LRE.push(area);
			Hist[i];
			height[] *
				s.empty() ? i : i - s.top() - 1;  // means depending on the first experision, if true choose to 
			// use the value of the second expression, if false, use the value of the third

		}
		return LRE.top();
	}
};

int main() {
	int L_R;
	vector<int> Hist = { 2,1,5,6,2,3 };
	Solution sl2;
	L_R = sl2.largest_rectangle(Hist);
	cout << L_R << endl;



}