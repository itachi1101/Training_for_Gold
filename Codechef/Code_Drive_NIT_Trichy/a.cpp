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
void generate(vector<int>&temp, vector<vector<int>>&store, vector<int>&v, int curr, int n) {
	if (curr > n or temp.size() == n) {
		store.push_back(temp);
		return;
	}
	for (int i = 0; i < v.size(); i++) {
		temp.push_back(v[i]);
		generate(temp, store, v, curr + 1, n);
		temp.pop_back();
	}
	return;
}
void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		ll n; cin >> n;
		if (n == 1 or n == 2) {
			cout << 0 << endl;
			continue;
		}
		vector<int>temp;
		vector<vector<int>>store;
		vector<int>v = {0, 1, 2};
		generate(temp, store, v, 0, n);

		ll cnt = 0;
		for (auto child : store) {
			for (int i = 1; i < child.size() - 1; i++) {
				cnt += (child[i] > child[i - 1] && child[i] > child[i + 1]);
				cnt += (child[i] < child[i - 1] && child[i] < child[i + 1]);
			}
		}
		cout << cnt << endl;
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