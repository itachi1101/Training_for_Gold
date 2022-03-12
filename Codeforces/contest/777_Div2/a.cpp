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
		int n;
		cin >> n;
		if (n <= 2)
			cout << n << endl;
		else {
			int sum = 0;
			string ans;
			bool ok = true;
			while (sum < n) {
				if (ok) {
					ans.push_back('1');
					sum += 1;
					ok = !ok;
				}
				else {
					ans.push_back('2');
					sum += 2;
					ok = !ok;
				}
			}
			string ans2;
			int sum1 = 0;
			ok = false;
			while (sum1 < n) {
				if (ok) {
					ans2.push_back('1');
					sum1 += 1;
					ok = !ok;
				}
				else {
					ans2.push_back('2');
					sum1 += 2;
					ok = !ok;
				}
			}
			if (sum1 == n && sum == n) {
				cout << max(ans2, ans) << endl;
			}
			else if (sum1 == n) {
				cout << ans2 << endl;
			}
			else cout << ans << endl;
		}
	}
	return 0;
}