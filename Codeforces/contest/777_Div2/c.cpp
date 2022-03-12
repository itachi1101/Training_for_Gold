# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
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
		int n, m;
		cin >> n >> m;
		vector<string>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		if (v[0][0] == '1')
			cout << -1 << endl;
		else {
			vector<array<int, 4>>ans;
			for (int i = n - 1; i >= 0; i--) {
				for (int j = m - 1; j >= 0; j--) {
					if (v[i][j] == '1') {
						if (j > 0) {
							ans.push_back({i + 1, j, i + 1, j + 1});
						}
						else {
							ans.push_back({i, j + 1, i + 1, j + 1});
						}
					}
				}
			}
			cout << ans.size() << endl;
			for (auto child : ans)
				cout << child[0] << " " << child[1] << " " << child[2] << " " << child[3] << endl;
		}

	}
	return 0;
}