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
	int n, k;
	cin >> n >> k;
	set<string>st;
	string ans;
	ans.push_back('a');
	int j = 0;
	for (int x = 1; x <= n - 1; x++) {
		if ((x + 1) % k == 0 && (x + 1) != k)
			j += 1;
		for (char i = 'a' + (j % k); i < 'a' + k; i++) {
			string check;
			check.push_back(ans.back());
			check.push_back(i);
			if (st.find(check) != st.end())continue;
			ans.push_back(i);
			st.insert(check);
			break;
		}
	}
	int m = 0;
	while (ans.size() < n) {
		int t = k;
		while (ans.size() < n && t > 0) {
			ans.push_back('a' + (m % k));
			t--;
		}
		m += 1;
	}
	cout << ans << endl;
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