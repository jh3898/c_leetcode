class Solution {
public:
	string longestPalindrome(string s) {
		vector<string> path;
		dfs(s, path, 0, 1);
		return path;
	}
	void dfs(string &s, vector<string> &path, int start, int end) {
		if (end = s.size() - 1) {
			if (is_palin(s, path, start, end)) path.push_back(s.substr(start, end - start));
			return;
		}
		dfs(s, path, start, end + 1);
		for (i = start; i<s.size(); i++) {

			is_palin(s, path, start, end) {
				path.push_back(s.substr(start, end - start));
				dfs(s, path, start + 1, start + 1);
			}
		}

	}
	bool is_palin(string s, vector<string> &path, int start, int end) {
		while (start <= end) {
			if (s.substr(start) != s.substr(end)) {
				return false;
			}
			start++;
			end--;

		}
		return true;

	}







};