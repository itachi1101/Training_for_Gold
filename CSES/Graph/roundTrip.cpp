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
const int mxn = 2e5 + 6;
string imp = "IMPOSSIBLE";
vector<int>adj[mxn];
vector<bool>vis;
bool ok = false;
vector<int>path;
int p[mxn];
void dfs(int src, int par) {
	p[src] = par;
	vis[src] = true;
	for (auto child : adj[src]) {
		if (child == par)
			continue;
		if (vis[child] == true) {
			int u = src;
			while (src ^ child) {
				path.push_back(src);
				src = p[src];
			}
			path.pb(child);
			path.pb(u);
			cout << path.size() << endl;
			for (auto child : path)
				cout << child << " ";
			exit(0);
		}
		else {
			dfs(child, src);
		}
	}
	return;
}
void JaiShreeRam() {
//write your code here
	int n, m; cin >> n >> m;
	int u, v;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vis.assign(mxn, false);
	for (int i = 1; i <= n; i++) {
		if (!vis[i])
			dfs(i, -1);
	}
	cout << imp << endl;
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