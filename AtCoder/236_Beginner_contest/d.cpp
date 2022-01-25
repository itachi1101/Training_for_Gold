// 2N
// 1 2 3     ........ 2N
// (ai aj)  --> A(ij)
#include<bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////// JAI SHREE RAM /////////////////////////////////////////////////////////////////////
#define mem(x, y)                   memset(x,y,sizeof(x))
#define pb                         push_back
#define all(a)                     (a).begin(), (a).end()
#define all_r(a)                   (a).rbegin(), (a).rend()
#define sz(x)                      (int)(x.size())
#define endl                       '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void fastIO() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
string yes = "YES";
string no = "NO";
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll solve(ll curr, vector<bool>&visited, vector<vector<ll>>&v) {
	if (curr >= v.size())
		return 0LL;
	if (visited[curr] == true)
		return solve(curr + 1, visited, v);
	else {
		visited[curr] = true;
		ll t = 0LL;
		for (ll i = 0; i < (ll)v.size(); i++) {
			if (visited[i] == true or v[curr][i] == -1)
				continue;
			else {
				visited[i] = true;
				ll x = v[curr][i] ^ solve(curr + 1, visited, v);
				visited[i] = false;
				t = max(x, t);
			}
		}
		return t;
	}
}
void JaiShreeRam() {
//write your code here
	int n;
	cin >> n;
	vector<vector<ll>>v(2 * n, vector<ll>(2 * n, -1));
	for (int i = 0; i < 2 * n; i++) {
		for (int j = i + 1; j < 2 * n; j++) {
			cin >> v[i][j];
		}
	}
	ll ans = LLONG_MIN;
	for (ll i = 0; i < 2 * n ; i++) {
		if (v[0][i] != -1) {
			vector<bool>visited(1LL << 31, false);
			visited[0] = true;
			visited[i] = true;
			ll t = solve(0, visited, v);
			ans = max(ans, v[0][i] ^ t);
		}
	}

	cout << ans << endl;
}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	JaiShreeRam();
	return 0;
}
// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;