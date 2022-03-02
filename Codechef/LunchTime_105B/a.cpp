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
		ll n, sum = 0; cin >> n;
		vector<ll>v(n);

		for (auto&x : v) {cin >> x; sum += x;}
		ll ans = sum, temp = 0;

		for (int i = 0; i < n; i++) {
			ans = min(max(temp, sum - temp), ans);
			temp += v[i];
		}
		cout << ans << endl;
	}
	return 0;
}