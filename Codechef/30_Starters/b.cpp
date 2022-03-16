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
		ll n, k;
		cin >> n >> k;
		vector<ll>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		sort(all(v));
		ll left = 0, right = n - 1;
		ll ans = 0;
		while (left <= right) {
			ll mid = left + (right - left) / 2;
			ll sum = 0;
			for (ll i = 0; i < mid; i++) {
				sum += v[i];
			}
			sum += (v[mid] + 1) / 2;
			if (sum <= k) {
				ans = max(ans, mid + 1);
				left = mid + 1;
			}
			else right = mid - 1;
		}
		cout << ans << endl;
	}
	return 0;
}