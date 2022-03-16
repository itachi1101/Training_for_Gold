# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		string s; cin >> s;
		int z = 0, o = 0;
		for (auto child : s) {
			if (child == '0')
				z++;
			else o++;
		}
		string ans;
		while (z--)
			ans.push_back('0');
		while (o--)
			ans.push_back('1');
		cout << ans << endl;
	}

	return 0;
}