#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
	int Triangle(vector<vector<int>> trig) {
		int row = trig.size();
		int col = trig[1].size();
		//cout << row<< endl;
		//cout << col << endl;
		vector<int> total(row, INT_MAX);
		for (auto i : total) {
           cout << i << endl;
		}
		
		vector<vector<int>> dp(trig.size(),vector<int> (trig.size()));
		int sumT = INT_MAX;
		dp[0][0] = trig[0][0];
		//cout << dp[0][0]<<endl;
		for (int i = 1; i < trig[1].size(); i++) {
			dp[i][0] = trig[i][0] + dp[i-1][0];
			dp[i][i] = trig[i][i] + dp[i - 1][i-1];
		//	cout << dp[i][0] << endl;
			for (int j = 1; j < i; j++) {
				dp[i][j] = min(dp[i-1][j],dp[i-1][j-1])+trig[i][j];
			//	cout << dp[i][j] << endl;
			}

		}
		for (int i = 0; i < row; i++) {

			sumT = min(sumT, dp[row-1][i]);
		}
		//sumT = min(dp[trig.size()][0], dp[trig.size()][trig[1].size()]);
		return sumT;
	}



};




int main() {
	Solution sl2;
	vector<vector<int>> trig(4,vector<int>(4)); //= { {2},{3,4},{6,5,7},{4,1,8,3} };
	trig[0][0] = 2;
	trig[1][0] = 3;
	trig[1][1] = 4;
	trig[2][0] = 6;
	trig[2][1] = 5;
	trig[2][2] = 7;
	trig[3][0] = 4;	
	trig[3][1] = 1;
	trig[3][2] = 8;
	trig[3][3] = 3;
	int sumt;
	sumt=sl2.Triangle(trig);
	cout << sumt << endl;

}