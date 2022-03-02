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
		int n; cin >> n; string s;
		vector<int>v(n), correct(n);
		for (int i = 0; i < n; i++) {cin >> v[i]; correct[i] = v[i];}
		cin >> s;
		sort(all(correct));
		int left = -1, right = -1;
		for (int i = 0; i < n; i++) {
			if (v[i] != correct[i] && left == -1) {
				right = i;
				left = i;
			}

			else if (v[i] != correct[i]) {
				right = i;
			}
		}
		// everything is sorted
		if (left == -1 && right == -1) {
			cout << 0 << endl;
			continue;
		}
		// polarity of first and last element is different
		if ((s[0] == 'N' && s[n - 1] == 'S') or (s[0] == 'S' && s[n - 1] == 'N'))
		{
			cout << 1 << endl;
			continue;
		}

		int cnt = 0;
		bool flag = false, ok = false;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'N' && flag == false) {
				cnt++;
				flag = true;
			}
			if (s[i] == 'S' && ok == false) {
				cnt++;
				ok = true;
			}
			if (cnt >= 2)
				break;
		}
		//if cnt<2 that means one polarity is missing
		if (cnt < 2) {
			cout << -1 << endl;
			continue;
		}

		set<char>st;
		for (int i = 0; i <= left; i++)
			st.insert(s[i]);
		if (st.size() == 2)
		{
			cout << 1 << endl;
			continue;
		}
		st.clear();
		for (int i = right; i < n; i++)
		{
			st.insert(s[i]);
		}
		if (st.size() == 2) {
			cout << 1 << endl;
			continue;
		}
		cout << 2 << endl;
	}
	return 0;
}