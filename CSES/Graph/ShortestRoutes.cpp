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
#define ar array
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int mxn = 1e5 + 7;
int n, m;
vector<ar<ll, 2>>adj[mxn];
ll dis[mxn];
void JaiShreeRam() {
//write your code here
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		ll a, b, c; cin >> a >> b >> c;
		adj[a].pb({c, b});
	}
	priority_queue<ar<ll, 2>, vector<ar<ll, 2>>, greater<ar<ll, 2>>>q;
	q.push({0, 1});
	mem(dis, 0x3f);
	dis[1] = 0;
	while (q.size()) {
		ar<ll, 2>u = q.top();
		q.pop();
		if (u[0] > dis[u[1]])
			continue;
		for (ar<ll, 2>v : adj[u[1]]) {
			if (dis[v[1]] > dis[u[1]] + v[0]) {
				dis[v[1]] = dis[u[1]] + v[0];
				q.push({dis[v[1]], v[1]});

			}
		}
	}
	for (int i = 1; i <= n; i++)
		cout << dis[i] << " ";
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