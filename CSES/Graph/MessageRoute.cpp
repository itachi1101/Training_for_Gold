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
string imp = "IMPOSSIBLE";
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int const mxn = 1e5 + 7;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
int parent[mxn];
vector<int>adj[mxn];
int  vis[mxn];
void JaiShreeRam() {
//write your code here
	int n, m;
	int u, v;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	mem(vis, 0);
	parent[1] = -1;
	queue<int>q;
	q.push(1);
	vis[1] = 1;
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		for (auto child : adj[curr]) {
			if (vis[child] == 0) {
				vis[child] = 1;
				q.push(child);
				parent[child] = curr;
			}
		}
	}

	if (vis[n] == 1) {
		vector<int>path;
		for (int v = n; v != -1; v = parent[v]) {
			path.push_back(v);
		}
		reverse(all(path));
		cout << path.size() << endl;
		for (auto child : path)
			cout << child << " ";
	}
	else
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