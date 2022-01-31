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
		int t = n - 1, cnt = 0;;
		int msb = 0;
		t /= 2;
		while (t != 0) {
			t /= 2;
			msb++;
		}
		int val = (1 << msb);
		cout << val << endl;
		/*		for (int i = 1; i < n; i++) {
					if (i == val)
						cout << 0 << " ";
					cout << i << " ";
				}
		*/		cout << endl;

	}
	return 0;
}