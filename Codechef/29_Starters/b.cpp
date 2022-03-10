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
	int test; cin >> test; while (test--) {
		int n;
		cin >> n;
		vector<ll>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		vector<ll>odd, even;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				odd.push_back(abs(v[i]));
			else
				even.push_back(abs(v[i]));
		}
		sort(all(odd)); sort(all(even));
		if (odd[0] < even[even.size() - 1]) {

			swap(odd[0], even[even.size() - 1]);
		}
		ll sum = accumulate(all(odd), 0LL);
		ll sumEven = accumulate(all(even), 0LL);
		cout << sum - sumEven << endl;

	}
	return 0;
}