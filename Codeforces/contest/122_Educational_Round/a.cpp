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
		long long n; cin >> n;
		if (n % 7 == 0) {
			cout << n << endl;
		}
		else {
			n /= 10;
			n *= 10;
			for (int i = 0; i <= 9; i++) {
				n += i;
				if (n % 7 == 0) {
					cout << n << endl;
					break;
				}
				n -= i;
			}
		}
	}
	return 0;
}