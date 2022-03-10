# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
const int mod = 1e9 + 7;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	long long n, m; cin >> n >> m;
	vector<ll>v(n + 1);
	for (long long i = 1; i <= n; i++)cin >> v[i];
	vector<array<ll, 2>>store(m);
	for (long long i = 0; i < m; i++) {
		long long c, x; cin >> c >> x;
		for (long long j = 0; j < x; j++) {
			long long w, cc; cin >> w >> cc;
			v[cc] = (v[cc] % mod + (v[c] * w) % mod) % mod;
		}
		v[c] = 0;

	}
	for (long long i = 1; i <= n; i++)
		cout << v[i] << " ";
	cout << endl;
	return 0;
}