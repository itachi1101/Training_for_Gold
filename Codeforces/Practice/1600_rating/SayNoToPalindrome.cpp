// SayNoToPalindrome
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
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	vector<vector<int>> pr(6, vector<int>(n + 1));
	string t = "abc";
	int cur = 0;
	do {
		for (int i = 0; i < n; ++i)
			pr[cur][i + 1] = pr[cur][i] + (s[i] != t[i % 3]);
		++cur;
	} while (next_permutation(t.begin(), t.end()));
	while (m--) {
		int l, r;
		cin >> l >> r;
		int ans = n;
		for (int i = 0; i < 6; ++i)
			ans = min(ans, pr[i][r] - pr[i][l - 1]);
		cout << ans << "\n";
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