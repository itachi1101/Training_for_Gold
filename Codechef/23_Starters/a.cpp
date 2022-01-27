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
		double x;
		cin >> x;
		bool ok = false;
		for (int i = 1; i <= 300; i++) {
			for (int j = i + 1; j <= 300; j++) {
				for (int k = j + 1; k <= 300; k++) {
					double mean = (i + j + k) / 3.0;
					if (mean == x) {
						cout << i << " " << j << " " << k << endl;
						ok = true;
						break;
					}
				}
				if (ok)
					break;
			}
			if (ok)
				break;
		}
	}
	return 0;
}