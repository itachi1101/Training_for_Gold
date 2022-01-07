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
const int mxN = 2e5 + 7;
vector<int>adj[mxN];
int group[mxN], vis[mxN];
bool odd_cycle = 0;
void dfs(int cur, int par , int col ) {
    vis[cur] = col;
    group[cur] = col;
    for (auto child : adj[cur]) {
        if (vis[child] == 0) {
            dfs(child, cur, 3 - col);
        }
        else if (child != par && col == vis[child]) {
            odd_cycle = 1;
        }

    }
    return ;
}
void JaiShreeRam() {

//write your code here
    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    mem(group, -1);
    mem(vis, 0);
    odd_cycle = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0)
            dfs(i, 0, 1);
    }
    if (odd_cycle)
        cout << imp << endl;
    else {
        for (int i = 1; i <= n; i++)
            cout << group[i] << " ";
    }

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