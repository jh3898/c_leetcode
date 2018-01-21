#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
   int	longestConquence(vector<int> Seq) {
	   unordered_map<int, int> Mseq;
	   int Leg=0;
	   for (int i = 1; i < Seq.size(); i++) {
		   Mseq[Seq[i]]++;
	   }
	   for (int i = 1; i < Seq.size(); i++) {
		   for (int j = 1; j < Seq.size(); j++) {
			   if (Mseq.count(Mseq[Seq[i] - 1]) || Mseq.count(Mseq[Seq[i] + 1])) {
				   Leg++;
			   }

	   }
	   return Leg;
 	}
};

int main() {
	vector<int> Seq = {100,4,200,1,3,2,5,102,101,103};
	int Leg=0;
	Solution sl2;
	Leg=sl2.longestConquence(Seq);
	cout << Leg << endl;


}