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
	int n; cin >> n;
	if (n & 1)
		cout << -1 << endl;
	else {
		cout << 0 << " " << 0 << endl;
		cout << n << " " << 0 << endl;
		cout << n / 2 << " " << -n / 2 << endl;
		cout << n / 2 << " " << n / 2 << endl;
	}
	return 0;
}