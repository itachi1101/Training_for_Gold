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
		int a, b;
		cin >> a >> b;
		// we always know b>a
		int ans = b - a;
		for (int a1 = a; a1 < b; a1++) {
			int b1 = 0;
			for (int i = 21; i >= 0; i--) {
				if ((b >> i) & 1) {
					b1 ^= (1 << i);
				}
				else {
					if ((a1 >> i) & 1) {
						b1 ^= (1 << i);
						break;
					}
				}
			}
			ans = min(ans, a1 + (a1
			                     | b1) + (1 - a - b));
		}
		cout << ans << endl;

	}
	return 0;
}