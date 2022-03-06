# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
long long distancesum(vector<long long>&arr, long long n)
{

	sort(all(arr));
	long long res = 0, sum = 0;
	for (long long i = 0; i < n; i++) {
		res += (arr[i] * i - sum);
		sum += arr[i];
	}

	return res;
}
long long totaldistancesum(vector<long long>&x, vector<long long>&y , long long n)
{
	return distancesum(x, n) + distancesum(y, n);
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

	long long n, m; cin >> n >> m;
	long long ans = 0;
	map<long long, vector<pair<long long, long long>>>mp;
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j <= m; j++) {
			long long x; cin >> x;
			mp[x].push_back({i, j});
		}
	}
	for (auto child : mp) {
		vector<ll>x, y;
		for (auto xx : child.second) {
			x.push_back(xx.first);
			y.push_back(xx.second);
		}
		long long sz = x.size();
		ans += totaldistancesum(x, y, sz);
	}
	cout << ans << endl;

	return 0;
}