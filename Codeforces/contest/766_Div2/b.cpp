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
		ll n, m;
		cin >> n >> m;
		vector<ll>store;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				ll d1 = abs(i - 1) + abs(j - 1);
				ll d2 = abs(i - 1) + abs(j - m);
				ll d3 = abs(i - n) + abs(j - 1);
				ll d4 = abs(i - n) + abs(j - m);
				store.push_back(max({d1, d2, d3, d4}));
			}
		}
		sort(all(store));
		for (int i = 0; i < (n * m) ; i++)
			cout << store[i] << " ";
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