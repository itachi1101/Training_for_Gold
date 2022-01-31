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
	int test;
	cin >> test;
	while (test--) {
		int n; cin >> n;
		string s; cin >> s;
		if (n == 1) {
			cout << "yes" << endl;
		}
		else if (n == 2) {
			if (s[0] != s[1]) {
				cout << "yes" << endl;
			}
			else cout << "No" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}