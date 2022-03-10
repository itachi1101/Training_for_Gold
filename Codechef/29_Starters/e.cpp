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
	int test; cin >> test; while (test--) {
		ll n, d; cin >> n >> d;
		vector<ll>a(n + 1), b(n + 1);
		for (ll i = 1; i <= n; i++)
			cin >> a[i];
		for (ll i = 1; i <= n; i++)
			cin >> b[i];
		ll ans = LLONG_MIN;
		for (ll i = max(n - 2 * d, 1LL); i <= n; i++) {
			for (ll j = a[i]; j <= n; j++)
				ans = max(ans, i * j - d * (b[i] ^ b[j]));
		}
		cout << ans << endl;

	}
	return 0;
}