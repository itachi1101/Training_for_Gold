# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int solve(string&s, int x, int n) {
	int res = 0;
	for (int k = 0; k < n; k++) {
		if (s[k] == '1')
		{
			s[k] = '0';
			int i = 0;
			int ans = 0;
			while (i < n) {
				if (s[i] == '0') {
					int j = 0;
					while (j < x && i < n) {
						if (s[i] == '0') {
							j++;
							i++;
						}
						else
							break;
					}
					if (j == x ) {
						ans += 1;
					}
				}
				else i++;

			}
			res = max(res, ans);
			s[k] = '1';
		}
	}

	return res;
}
int solve1(string&s, int x, int n) {
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	int zero = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			zero++;
		}
		else {
			dp[i] = zero;
			zero = 0;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') {
			zero++;
		}
		else {
			dp[i] += zero;
			zero = 0;
		}
	}
	bool ok = false;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			if (dp[i] >= x - 1) {
				ok = true;
				break;
			}
		}
	}
	int i = 0;
	int ans = 0;
	while (i < n) {
		if (s[i] == '0') {
			int j = 0;
			while (j < x && i < n) {
				if (s[i] == '0') {
					j++;
					i++;
				}
				else
					break;
			}
			if (j == x ) {
				ans += 1;
			}
		}
		else i++;

	}

	if (ok)
		ans += 1;
	ans = min(ans, n / x);
	return ans;
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
	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n >> x;
		string s;

		cin >> s;
		int ans = 0;
		if (n >= 10000) {
			ans = solve1(s, x, n);
		}
		else {
			ans = solve(s, x, n);
		}
		cout << ans << endl;
	}

	return 0;
}