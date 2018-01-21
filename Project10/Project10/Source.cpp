#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& Arr1) {
		int rec=2;
		 int k = 0;
		for (int i = 2; i < Arr1.size(); i++)
		{

			if (Arr1[rec-2] != Arr1[i]) {
				Arr1[++rec] = Arr1[i];
			//	k = 1;
				//++;

			}
		//	else {
		//		++k;
				
			//	if (k == 2) {
			//		Arr1[++rec] = Arr1[i];
			//	}
                
		//	}
		}
		return rec;
	}
};
int main() {
	vector<int> Arr1 = { 1,2,2,2,3,3,3,4,5 };
	int k;
	Solution sl2;
	k=sl2.removeDuplicates(Arr1);
	cout << k << endl;
}