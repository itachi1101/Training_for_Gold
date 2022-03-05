# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int setBitsCount(ll value) {
	if (value == 0)
		return 0;
	else {
		return (value & 1LL) + setBitsCount(value >> 1LL);
	}
}
void generateAll(vector<vector<ll>>&store, vector<ll>&facto, int curr, ll target, int&ans, int cnt = 0) {
	if (target < 0) {
		return ;
	}
	if (target - facto[curr] < 0)
		return ;
	if (target - facto[curr] == 0) {
		ans = min(ans, cnt + 1);
		return;
	}
	generateAll(store, facto, curr + 1, target, ans, cnt);
	ans = min(ans, cnt + 1 + setBitsCount(target - facto[curr]));
	generateAll(store, facto, curr + 1, target - facto[curr], ans, cnt + 1);

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
	vector<ll>facto;
	ll fact = 1;
	for (ll i = 1; i <= 14; i++) {
		fact *= i;
		facto.push_back(fact);
	}
	int test; cin >> test;
	while (test--) {
		ll n; cin >> n;
		vector<vector<ll>>store;
		int ans = INT_MAX;
		generateAll(store, facto, 0, n, ans);
		ans = min(ans, setBitsCount(n));
		cout << ans << endl;

	}

	return 0;
}