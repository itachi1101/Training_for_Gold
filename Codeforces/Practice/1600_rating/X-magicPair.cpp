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
// this is pretty much same as gcd using euclid

void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		ll a, b, x;
		cin >> a >> b >> x;
		bool ok = true;
		if (a > b)
			swap(a, b);
		while (a) {
			if (x == a or x == b)
			{
				cout << yes << endl;
				ok = false;
				break;
			}
			if (x > a && x < b && x % a == b % a) {
				cout << yes << endl;
				ok = false;
				break;
			}


			b = b % a;
			swap(a, b);
		}
		if (ok)
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