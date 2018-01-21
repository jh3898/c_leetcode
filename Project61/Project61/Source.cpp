#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
	void dfs(vector<vector<char>> &grid, int x, int y) {
		if (x < 0 || x >= grid.size()) return;
		if (y < 0 || y >= grid[0].size()) return;
		if (grid[x][y] != '0') return;
		grid[x][y] = 'X';
		dfs(grid, x + 1, y);
		dfs(grid, x - 1, y);
		dfs(grid, x, y + 1);
		dfs(grid, x, y - 1);

	}

	vector<vector<char>> sourounded_regions(vector<vector<char>> &grid) {
		if (grid.empty() || grid[0].empty()) return grid;
		int N = grid.size(), M = grid[0].size();
		for (int i = 0; i < N; ++i) {
			if (grid[i][0] == '0') {
				dfs(grid, i, 0);
			}
			if (grid[i][M-1] == '0') {
				dfs(grid, i, M-1);
			}
		}
		for (int j = 0; j < M; ++j) {
			if (grid[0][j] == '0') {
				dfs(grid, 0, j);
			}
			if (grid[N-1][j] == '0') {
				dfs(grid, N-1, j);
			}
		}
		int cnt = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if (grid[i][j] == '0') {
					grid[i][j] = '1';

				}

			}

		}
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if (grid[i][j] == 'X') {
					grid[i][j] = '0';

				}

			}

		}
		return grid;

	}

};

int main() {
	Solution sl2;
	int n = 0;
	vector<vector<char>> S = { { '1','1' ,'1' ,'1' },{ '1','0' ,'0' ,'1' },{ '1','1' ,'0','1' },{ '1','0' ,'1','1' } };

	S= sl2.sourounded_regions(S);
	for (auto i : S) {
		for (auto j : i) {
			cout << j << endl;
		}


	}

}