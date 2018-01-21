#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
	 public:
		     void dfs(vector<vector<char>> &grid, int x, int y) {
			         if (x < 0 || x >= grid.size()) return;
			         if (y < 0 || y >= grid[0].size()) return;
			         if (grid[x][y] != '1') return;
			         grid[x][y] = 'X';
			         dfs(grid, x + 1, y);
			         dfs(grid, x - 1, y);
			         dfs(grid, x, y + 1);
			         dfs(grid, x, y - 1);
			
		}
		
			     int numIslands(vector<vector<char>> &grid) {
			         if (grid.empty() || grid[0].empty()) return 0;
			         int N = grid.size(), M = grid[0].size();
			         int cnt = 0;
			         for (int i = 0; i < N; ++i) {
				            for (int j = 0; j < M; ++j) {
					                if (grid[i][j] == '1') {
						                     dfs(grid, i, j);
						                     ++cnt;
						
					}
					
				}
				
			}
			         return cnt;
			
		}
		
};

int main() {
	Solution sl2;
	int n = 0;
	vector<vector<char>> S = { { '1','1' ,'0' ,'0' ,'0'},{ '1','1' ,'0' ,'0','0' },{ '0','0' ,'1' ,'0','0' },{ '0','0' ,'0' ,'1','1' } };
	n= sl2.numIslands(S);
	cout << n << endl;

}