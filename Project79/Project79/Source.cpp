#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


class Solution {
public:
	int minDistance(string word1, string word2) {
		int m = word1.size();
		int n = word2.size();
		vector<vector<int>> dp(m+1, vector<int>(n+1,0));
		for (int j = 0; j < n;j++) {
			dp[0][j] = j;
		}
		for (int i = 1; i <= m; i++) {
			dp[i][0] = i;
			for (int j = 1; j <= n; j++) {
				dp[i][j] = dp[i - 1][j - 1];
				if (word1[i] != word2[j]) { dp[i][j]++; }
				dp[i][j] = min(min(dp[i][j-1]+1,dp[i-1][j]+1),dp[i][j]);
			
			}
		}
		return dp[m][n];
	}
};

int main() {
	Solution sl2;
	string S1 = "abc",S2= "adcb";
	int n = 0;
	n=sl2.minDistance(S1,S2);
	cout << n << endl;


}