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
		for (ll i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				store.push_back(i);
				if ((n / i) != i)
					store.push_back(n / i);

			}
		}

		ll cnt = 0;
		ll x = m;
		for (ll i = 2; i * i <= x; i++) {
			if (m % i == 0) {
				cnt += 1LL;
				while (m % i == 0)
					m /= i;

			}
		}
		if (m > 1)
			cnt += 1LL;
		ll res = 0;
		for (int i = 0; i < store.size(); i++) {
			if (store[i] <= cnt)
				res = store[i];
		}
		cout << res << endl;

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