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
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
const int mxN = 1e4 + 5;
vector<vector<bool>>visited(mxN, vector<bool>(mxN, false));
void dfs(int x, int y, vector<vector<char>>&v) {
	if (x<0 or x >= v.size() or y<0 or y >= v[0].size() or visited[x][y] == true  or v[x][y] == '#')
		return;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		dfs(x + dx[i], y + dy[i], v);
	}
}
void JaiShreeRam() {
//write your code here
	int n, m; cin >> n >> m;
	vector<vector<char>>v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> v[i][j];

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false && v[i][j] == '.') {
				cnt++;
				dfs(i, j, v);
			}
		}
	}
	cout << cnt << endl;


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