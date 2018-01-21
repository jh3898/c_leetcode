#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
	int median_of_two_array(vector<int>& m1, vector<int>& m2,int k) {
		int s1, s2,k0;
		s1 = m1.size();
		s2 = m2.size();
		return compare(m1.begin(),s1,m2.begin(),s2,k);
		//k0 = k / 2;
	}
private:
	int compare(vector<int>::const_iterator A,int m, vector<int>::const_iterator B, int n, int k) {
		if (m == 0) return *(B + k - 1);
		if (k == 1)   return min(*A, *B);
		int ia = min(k / 2, m), ib = k - ia;
		if (*(A + ia - 1) < *(B + ib - 1))
			return compare(A+ia,m-ia,B,n,k-ia);

   }
};

int main() {
	vector<int> m1, m2;


}






