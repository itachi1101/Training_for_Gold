# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	int test;
	cin >> test;
	while (test--) {
		int n, k, x;
		cin >> n >> k >> x;
		if (x > k) {
			cout << -1 << endl;
		}
		else {
			vector<int>v;
			int i = 0;
			while (v.size() < k) {
				if (i == x) {
					i++;
					continue;
				}
				else {
					v.push_back(i);
					i++;

				}
			}

			vector<int>ans;
			while (ans.size() < n) {
				for (auto child : v) {
					if (ans.size() == n)
						break;
					ans.push_back(child);
				}
			}
			for (auto child : ans)
				cout << child << " ";
			cout << endl;
		}
	}
	return 0;
}