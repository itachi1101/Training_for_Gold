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
	string str; cin >> str;
	int j = str.size() - 1;
	int i = 0;
	int cnt = 0;
	while (str[j] == 'a') {
		cnt++;
		j--;
	}
	while (cnt > 0 && str[i] == 'a') {
		cnt--;
		i++;
	}
	bool ok = true;
	while (i < j) {
		if (str[i] != str[j]) {
			ok = false;
			break;
		}
		i++, j--;
	}
	if (!ok) {
		cout << "No";
	}
	else {
		cout << "Yes";
	}
	return 0;

}

