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
		set<ll>st;
		bool ok = true;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			while (v[i] > n) {
				v[i] /= 2;
			}
			while (v[i] > 0 && st.find(v[i]) != st.end()) {
				v[i] /= 2;
			}
			if (v[i] == 0)
				continue;
			else
				st.insert(v[i]);
		}
		sort(all(v));
		for (int i = 1; i <= n; i++) {
			if (v[i - 1] < i) {
				ok = false;
				break;
			}
			else {
				while (v[i - 1] > i)
					v[i - 1] /= 2;
				if (v[i - 1] != i) {
					ok = false;
					break;
				}
			}
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