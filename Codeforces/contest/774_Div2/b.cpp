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
		vector<ll>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(all(v));
		ll red = v.back();
		ll blue = v[0] + v[1];

		int i = 2, j = n - 2;
		while (i < j) {
			red += v[j];
			blue += v[i];
			j--, i++;
		}
		if (red > blue) {
			cout << "yes" << endl;

		}
		else cout << "no" << endl;
	}
	return 0;
}