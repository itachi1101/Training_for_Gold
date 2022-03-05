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
		string str; cin >> str;
		vector<array<int, 2>>v(str.size());
		for (int i = 0; i < str.size(); i++) {
			if (i == 0) {
				if (str[i] == '0') {
					v[i][0] = 1;
					v[i][1] = 0;
				}
				else {
					v[i][0] = 0;
					v[i][1] = 1;
				}
			}
			else {
				if (str[i] == '0') {
					v[i][0] = v[i - 1][0] + 1;
					v[i][1] = v[i - 1][1];
				}
				else {
					v[i][0] = v[i - 1][0];
					v[i][1] = v[i - 1][1] + 1;
				}

			}
		}
		int maxi = 0;
		for (int i = 0; i < str.size(); i++) {
			if (v[i][0] > v[i][1] or v[i][1] > v[i][0]) {
				int temp = min(v[i][0], v[i][1]);
				maxi = max(temp, maxi);
			}

		}
		cout << maxi << endl;
	}
	return 0;
}