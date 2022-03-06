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
		vector<ll>v(n);
		ll maxi = LLONG_MIN;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			maxi = max(maxi, v[i]);
		}
		long long sum = 0;
		for (auto child : v)
			sum += child;
		if (sum == 0) {
			cout << 0 << endl;
		}
		else if (sum > 0 && n % 2 == 0) {
			cout << 1 << endl;
		}
		else {

			cout << maxi * 2LL - sum << endl;
		}
	}
	return 0;
}