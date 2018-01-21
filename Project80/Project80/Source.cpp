#include<iostream>
#include<vector>

using namespace std;


class Employee {
public:
	// It's the unique ID of each node.
	// unique id of this employee
	int id;
	// the importance value of this employee
	int importance;
	// the id of direct subordinates
	vector<int> subordinates;
};

class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		employees[id];
	}
};

int main() {
	Solution sl2;
	vector<Employee*> employees = {{1,5,{2,3}},{2,3,{}},{3,3,{}}};
	sl2.getImportance(employees,1);
}