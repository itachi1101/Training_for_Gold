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
		int n; cin >> n;
		vector<ll>v(n);
		for (auto&x : v)cin >> x;
		vector<ll>ans(n);
		if (n & 1) {
			if (v[0] + v[1] != 0) {
				cout << -v[2] << " " << -v[2] << " " << v[0] + v[1] << endl;
			}
			else if (v[1] + v[2] != 0) {
				cout << v[2] + v[1] << " " << -v[0] << " " << -v[0] << endl;
			}
			else {
				cout << -v[1] << " " << v[0] + v[2] << " " << -v[1] << endl;
			}
			for (int i = 3; i < n; i += 2) {

				ans[i] = -v[i + 1];
				ans[i + 1] = v[i];
			}

			for (int i = 3; i < n; i++)
				cout << ans[i] << " ";
			cout << endl;
		}
		else {

			for (int i = 0; i < n; i += 2) {
				ans[i] = -v[i + 1];
				ans[i + 1] = v[i];
			}
			for (int i = 0; i < n; i++)
				cout << ans[i] << " ";
			cout << endl;
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