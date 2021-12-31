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
// n = (a^p) * (b^q) * (c^r)...
//     number of factors of a number =  (p + 1) * (q + 1) * (r + 1)...
//                                      504 == = (2 ^ 3) * (3 ^ 2) * 7
//                                              number of factors == ==  (3 + 1) * (2 + 1) * (1 + 1)
//                                              4 * 3 * 2
//                                              now we can see that if we just divide 504 by 2 it is divisible
//                                              so if we remove one 2 from the count of factors of 504 then we will get the max factors

void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		ll n; cin >> n;
		ll max_pow = 0, min_pf = 1e9;
		for (ll pf = 2; pf * pf <= n; pf++) {
			if (n % pf == 0) {
				ll pow = 0;
				while (n % pf == 0) {
					n /= pf;
					pow++;
				}
				if (pow > max_pow)
				{
					max_pow = pow;
					min_pf = pf;
				}
			}
		}
		if (min_pf == 1e9)
			min_pf = n;
		cout << min_pf << endl;
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