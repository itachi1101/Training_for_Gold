# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int a[20][20], n;
vector<pair<int, int>>store;
bool used[20];
int solve() {
	if (store.size() == n) {
		int res = 0;
		for (auto p : store)res ^= (a[p.first][p.second]);
		return res;
	}
	int free;
	for (int i = 1; i <= 2 * n; i++) {
		if (!used[i]) {
			free = i;
			break;
		}
	}
	used[free] = true;
	int res = 0;
	for (int i = 1; i <= 2 * n; i++) {
		if (!used[i]) {
			store.push_back({free, i}), used[i] = true;
			res = max(res, solve());
			store.pop_back(), used[i] = false;
		}
	}
	used[free] = false;
	return res;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) {
		for (int j = i + 1; j <= 2 * n; j++)
			cin >> a[i][j];
	}

	cout << solve() << endl;
	return 0;
}