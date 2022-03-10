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
		int n; cin >> n; string s; cin >> s;
		int i = 0, time = 0;
		while (i < n - 1) {
			if (s[i] == s[i + 1]) {
				time += 1;
				i += 2;
			}
			else {
				time += 1;
				i += 1;
			}
		}
		if (i == n - 1) {
			time += 1;
		}
		cout << time << endl;
	}
	return 0;
}