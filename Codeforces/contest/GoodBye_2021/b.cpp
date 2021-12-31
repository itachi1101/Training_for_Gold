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
		string str; cin >> str;
		if (n == 1) {
			cout << str[0] << str[0] << endl;
			continue;
		}
		if (str[0] == str[1]) {
			cout << str[0] << str[1] << endl;
			continue;
		}
		string ans; ans.pb(str[0]);
		for (int i = 1; i < n; i++) {
			if (str[i] > ans.back())
				break;

			ans.pb(str[i]);

		}
		string temp = ans;
		reverse(all(temp));
		cout << ans << temp << endl;
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