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
		ll a, b, c;
		cin >> a >> b >> c;
		if (b - a == c - b) {
			cout << yes << endl;
			continue;
		}
		// case 1: if a is out of order
		bool ok = false;
		ll cd = c - b;
		if ((b - cd) % a == 0 && (b - cd) > 0) {
			ok = true;
		}
		// case2: if b is out of order
		cd = c - a;
		if (cd % 2 == 0 && ((cd / 2) + a) % b == 0 ) {
			ok = true;
		}
		// case 3: if c is out of order
		cd = b - a;
		if ((cd + b) % c == 0 && (cd + b) > 0) {

			ok = true;
		}
		if (ok)
			cout << yes << endl;
		else cout << no << endl;
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