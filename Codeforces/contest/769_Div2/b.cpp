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
		int msb = 30;
		for (; msb >= 0; msb--)
			if ((n - 1) & (1 << msb))
				break;
		int t = (1 << msb) - 1;
		for (int i = n - 1; i > t; i--)
			cout << i << " ";
		for (int i = 0; i <= t; i++)
			cout << i << " ";
		cout << endl;

	}
	return 0;
}