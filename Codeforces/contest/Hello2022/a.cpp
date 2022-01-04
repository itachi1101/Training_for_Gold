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
bool isValid(int r, int c, int n, vector<vector<int>>&v) {
	if (r<0 or r >= n or c<0 or c >= n or v[r][c] == 1)
		return false;
	// check for the entire row
	for (int i = 0; i < n; i++) {
		if (i == c)continue;
		if (v[r][i] == 1)
			return false;
	}
	// check for the entire column
	for (int i = 0; i < n; i++) {
		if (i == r)continue;
		if (v[i][c] == 1)
			return false;
	}
	return true;
}
bool solve(vector<vector<int>>&v, int n, int k, int r, int c) {
	if (k == 0)
		return true;
	if (r<0 or r >= n or c<0 or c >= n or v[r][c] == 1)
		return false;
	for (int col = c; col < n; col++) {
		if (isValid(r, c, n, v)) {
			v[r][c] = 1;
			bool temp = solve(v, n, k - 1, r + 2, col + 2);
			if (temp)
				return true;
			v[r][c] = 0;
		}
	}
	return false;
}
void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		int n, k; cin >> n >> k;
		vector<vector<int>>v(n, vector<int>(n, 0));
		if ((n + 1) / 2 < k)
			cout << -1 << endl;
		else {
			int cnt = 0, row = 0, col = 0;
			while (cnt < k) {
				cnt++;
				v[row][col] = 1;
				row += 2, col += 2;
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)
					cout << (v[i][j] == 0 ? '.' : 'R');
				cout << endl;
			}
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