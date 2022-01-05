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
void JaiShreeRam() {
//write your code here
	int n, m; cin >> n >> m;
	vector<vector<char>>v(n, vector<char>(m));
	int x = -1, y = -1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			if (v[i][j] == 'A') {
				x = i, y = j;
			}
		}

	vector<vector<bool>>visited(n, vector<bool>(m, false));
	queue<array<int, 2>>q;
	vector<int>d(n), p(n);
	q.push({x, y});
	while (!q.empty()) {
		int currX = q.front()[0];
		int currY = q.front()[1];
		q.pop();
		visited[currX][currY] = true;
		for (int i = 0; i < 4; i++) {

		}
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