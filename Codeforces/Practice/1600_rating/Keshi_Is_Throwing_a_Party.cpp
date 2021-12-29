// Keshi_Is_Throwing_a_Party
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
bool check(int people, vector<pair<int, pair<int, int>>>&v) {
	int cnt = 0, n = v.size();
	for (int i = 0; i < n; i++) {
		if (people - 1 - v[i].second.second <= cnt && cnt <= v[i].second.first)
			cnt++;
	}


	return cnt >= people;
}
void JaiShreeRam() {
//write your code here
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<pair<int, pair<int, int>>>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].second.second >> v[i].second.first;
			v[i].first = i + 1;
		}
		// for (auto child : v) {
		// 	cout << child.first << " " << child.second.first << " " << child.second.second;
		// 	cout << endl;
		// }
		int low = 1, high = n;
		int ans = INT_MIN;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (check(mid, v)) {
				ans = max(ans, mid);
				low = mid + 1;
			}
			else high = mid - 1;
		}
		cout << ans << endl;


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