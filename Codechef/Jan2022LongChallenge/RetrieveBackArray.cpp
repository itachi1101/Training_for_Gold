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
	int test;
	cin >> test;
	while (test--) {
		int n, x; cin >> n >> x;
		if (n == 1) {
			cout << x << endl;
			continue;
		}
		vector<int>ans(n);
		int temp = 0;
		for (int i = 0; i < n - 1; i++) {
			ans[i] = i;
			temp ^= ans[i];
		}
		int last = x ^ temp;
		int set_18 = (1LL << 18);
		if (last >= (n - 1) && last <= 500000) {
			ans[n - 1] = last;
		}
		else {
			ans[n - 1] = last ^ set_18;
			if ((ans[0]^set_18) == ans[n - 1])ans[1] ^= set_18;
			else ans[0] ^= set_18;
		}
		for (auto x : ans)cout << x << " ";
		cout << endl;
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