#include<bits/stdc++.h>
using namespace std;
int main() {
	int test; cin >> test;
	while (test--) {
		string s; cin >> s;
		int n = s.size();
		if (n == 1 or (n == 2 && s == "01")) {
			cout << "NO" << endl;
		}
		else {
			bool found = false;
			for (int i = 0; i < n; i++) {
				if (i == 0) {
					if (s[i] == '1' && s[i + 1] == '1') {
						found = true;
						break;
					}
				}
				else if (i == n - 1) {
					if (s[i] == '0' && s[i - 1] == '1') {
						found = true;
						break;
					}
				}
				else {
					if ((s[i] == '0' && s[i - 1] == '1') or (s[i] == '1' && s[i + 1] == '1')) {
						found = true;
						break;
					}
				}
			}
			if (found)
				cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}