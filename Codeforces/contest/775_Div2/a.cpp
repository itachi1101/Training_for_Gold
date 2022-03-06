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
		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				cnt++;
			}
		}
		if (cnt > 1) {
			int idx = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (v[i] == 0) {
					idx = i;
					break;
				}
			}
			int i = 0;
			while (i < n && v[i] == 1) {
				i++;
			}
			cout << (idx + 1) - (i - 1) << endl;
		}
		else {
			if (cnt == 0) {
				cout << 0 << endl;
			}
			else {
				int idx = 0;
				for (int i = 0; i < n; i++) {
					if (v[i] == 0) {
						idx = i;
						break;
					}
				}
				cout << (idx + 1) - (idx - 1) << endl;
			}
		}
	}

	return 0;
}