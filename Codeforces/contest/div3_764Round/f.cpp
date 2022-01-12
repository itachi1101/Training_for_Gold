#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(vector<ll>&a) {
	vector<ll>v;
	for (auto p : a) {
		auto it = upper_bound(v.begin(), v.end(), p);
		if (it == v.end()) {
			v.push_back(p);
		}
		else
			*it = p;

	}
	return (ll)v.size();
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ll n, k;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cin >> k;
	vector<bool>visited;
	ll ans = 0;
	vector<vector<ll>>store;
	visited.assign(n, false);
	for (int i = 0; i < n; i++) {
		if (visited[i])
			continue;
		vector<ll>temp;
		for (int j = i; j < n; j += k) {
			temp.push_back(v[j]);
			visited[j] = true;
		}
		store.push_back(temp);
	}
	for (auto child : store) {
		ans += (child.size() - solve(child));
	}
	cout << ans;

	return 0;
}