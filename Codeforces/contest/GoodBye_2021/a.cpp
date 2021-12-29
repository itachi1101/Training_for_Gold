#include<bits/stdc++.h>
using namespace std;
int main() {
	int test;
	cin >> test;
	for (int t = 0; t < test; t++) {
		map<int, int>freq;
		int n, x; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			freq[x]++;
		}
		for (auto c : freq) {
			if (c.first != 0 && c.second > 1)
				freq[-c.first]++;
		}
		cout << freq.size() << endl;
	}
}