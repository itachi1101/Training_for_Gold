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
set<ll>generate() {
	set<ll>res;
	for (int start = 1; start <= 9; start++) {
		for (int commonDifference = -9; commonDifference <= 8; commonDifference++) {
			string s;
			int digit = start;
			for (int i = 0; i < 18; i++) {
				s.push_back(digit + '0');
				res.insert(stoll(s));
				digit += commonDifference;
				if (!(0 <= digit  && digit <= 9))break;
			}

		}
	}
	return res;
}

void JaiShreeRam() {
//write your code here
	ll n;
	cin >> n;
	set<long long>store = generate();
	cout << (*store.lower_bound(n)) << endl;

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