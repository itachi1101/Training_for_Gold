#include<bits/stdc++.h>
using namespace std;
void fastIO() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
int main() {
	fastIO();
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		int n; cin >> n;
		vector<int>v(n);
		for (auto&x : v)cin >> x;
		if (n < 3)
			cout << 0 << endl;
		else {
			int res = v.size();
			for (int i = 0; i < v.size() - 1; i++) {
				for (int j = i + 1; j < v.size(); j++) {
					double change = (double)(v[j] - v[i]) / (j - i);
					int temp = 0;
					for (int k = 0; k < v.size(); k++) {
						if (k != i) {
							if ((v[k] + change * (i - k)) != v[i])
								temp++;
						}
					}
					res = min(res, temp);
				}
			}
			cout << res << endl;
		}
	}
	return 0;
}
