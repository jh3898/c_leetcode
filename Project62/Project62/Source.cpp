#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
	int largest_rectangle(vector<int> S) {
		int m=0, area, l=0,n=0;
		area = S[0];
		for (int i = 1; i < S.size(); i++) {
			if (S[i] > area) {
				l = i - 1;
				n = i;

			}
			area = min(S[i],area)*(n-l);
			m = max(area, m); 
		}
         return m;
	}
	
};