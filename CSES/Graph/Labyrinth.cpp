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
int const nxm = 1e5;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
vector<vector<int>>from;
const char dd[4] = {'R', 'D', 'L', 'U'};
vector<vector<char>>v;
vector<vector<char>>parent;
bool isValid(int x, int y, int n, int m) {
	if (x<0 or x >= n or y<0 or y >= m or v[x][y] == '#')
		return false;
	return true;
}

void JaiShreeRam() {
//write your code here
	int n, m; cin >> n >> m;
	int x = -1, y = -1, ei = -1, ej = -1;
	v.resize(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			if (v[i][j] == 'A') {
				x = i, y = j;
				v[i][j] = '#';
			}
			if (v[i][j] == 'B') {
				ei = i, ej = j;
			}
		}

	}
	from.resize(n + 1, vector<int>(m + 1, 9));
	parent.resize(n + 1, vector<char>(m + 1, 'x'));
	queue<array<int, 2>>q;
	vector<int>d(n), p(n);
	q.push({x, y});
	while (!q.empty()) {
		int currX = q.front()[0];
		int currY = q.front()[1];
		q.pop();
		for (int i = 0; i < 4; i++) {
			if (isValid(currX + dx[i], currY + dy[i], n, m)) {
				int ni = dx[i] + currX, nj = dy[i] + currY;
				v[ni][nj] = '#';
				parent[ni][nj] = dd[i];
				q.push({ni, nj });
				from[ni][nj] = i;
			}
		}
	}

	if (parent[ei][ej] != 'x') {
		cout << yes << endl;
		string res;
		while (ei != x or  ej != y) {
			res.push_back(parent[ei][ej]);
			int d = from[ei][ej];
			ei -= dx[d];
			ej -= dy[d];
		}
		reverse(all(res));
		cout << res.size() << endl;
		cout << res << endl;
	}
	else {
		cout << no << endl;
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