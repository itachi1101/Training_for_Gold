#include<bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////// JAI SHREE RAM /////////////////////////////////////////////////////////////////////
#define mem(x, y)                   memset(x,y,sizeof(x))
#define pb                          push_back
#define all(a)                      (a).begin(), (a).end()
#define make_a_pair                 array
#define all_r(a)                    (a).rbegin(), (a).rend()
#define sz(x)                       (int)(x.size())
#define endl                        '\n'
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
	int test;
	cin >> test;
	while (test--) {
		int n; cin >> n;
		int minL, maxR, valL = 0, valR = 0, maxn = 0, minval = 0;
		for (int i = 1; i <= n; i++) {
			int l, r, c; cin >> l >> r >> c;
			if (i == 1) {
				minL = l; maxR = r;
				valL = valR = c;
				maxn = r - l + 1;
				minval = c;
			} else {
				if (l < minL) minL = l, valL = c;
				else if (l == minL) valL = min(valL, c);
				if (r > maxR) maxR = r, valR = c;
				else if (r == maxR) valR = min(valR, c);
				if (r - l + 1 > maxn) {
					maxn = r - l + 1;
					minval = c;
				} else if (r - l + 1 == maxn) minval = min(minval, c);
			}
			int ans = valL + valR;
			if (maxR - minL + 1 == maxn) ans = min(ans, minval);
			cout << ans << endl;
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