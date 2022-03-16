# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	int test;
	cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		vector<int>v(4);
		for (int i = 0; i < 4; i++)cin >> v[i];
		bool ok = true;
		queue<pair<int, int>>q;
		q.push({v[0] - 1, v[1] - 1});
		vector<vector<int>>ans(n, vector<int>(m, -1));
		ans[v[0] - 1][v[1] - 1] = 1;
		ans[v[2] - 1][v[3] - 1] = 2;
		while (!q.empty()) {
			int sz = q.size();
			while (sz--) {
				auto curr = q.front();
				q.pop();
				int x = curr.first, y = curr.second;
				int val = 3 - ans[x][y];
				for (int i = 0; i < 4; i++) {
					int nx = x + dx[i], ny = y + dy[i];
					if (nx >= 0 and nx<n and ny >= 0 and ny < m and ans[nx][ny] == 2 and val == 1) {
						ok = false;
						break;
					}
					if (nx >= 0 and nx<n and ny >= 0 and ny < m and ans[nx][ny] == -1) {
						ans[nx][ny] = val;
						q.push({nx, ny});
					}
				}
			}
			if (!ok)
				break;
		}
		if (!ok) {

			queue<pair<int, int>>q;
			q.push({v[0] - 1, v[1] - 1});
			vector<vector<int>>ans1(n, vector<int>(m, -1));
			ans1[v[0] - 1][v[1] - 1] = 1;
			ans1[v[2] - 1][v[3] - 1] = 2;
			while (!q.empty()) {
				int sz = q.size();
				while (sz--) {
					auto curr = q.front();
					q.pop();
					int x = curr.first, y = curr.second;
					int val = (ans1[x][y] + 2) % 4;
					for (int i = 0; i < 4; i++) {
						int nx = x + dx[i], ny = y + dy[i];
						if (nx >= 0 and nx<n and ny >= 0 and ny < m and ans1[nx][ny] == -1) {
							ans1[nx][ny] = val;
							q.push({nx, ny});
						}
					}
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++)
					cout << ans1[i][j] << " ";
				cout << endl;
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++)
					cout << ans[i][j] << " ";
				cout << endl;
			}
		}

	}
	return 0;
}