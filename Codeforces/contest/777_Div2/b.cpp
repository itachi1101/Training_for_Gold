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
	int test; cin >> test;
	while (test--) {
		int n, m;
		cin >> n >> m;
		vector<string>v;
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			v.push_back(s);
		}
		bool ok = true;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < m - 1; j++) {
				int cnt = 0;
				if (v[i][j] == '1')cnt++;
				if (v[i + 1][j] == '1')cnt++;
				if (v[i][j + 1] == '1')cnt++;
				if (v[i + 1][j + 1] == '1')cnt++;
				if (cnt == 3) {
					ok = false;
					break;
				}
			}
			if (!ok)break;
		}

		if (!ok)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	return 0;
}