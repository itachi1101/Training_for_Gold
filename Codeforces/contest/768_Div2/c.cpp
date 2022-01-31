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
	string str;
	cin >> str;
	if (str.size() == 1)
	{
		cout << "Yes";
		return 0;
	}
	int j = str.size() - 1;
	int i = 0;
	while (str[i] != str[j]) {
		if (str[j] != 'a')
			break;

		j--;
	}
	bool ok = false;
	if (i == j)
	{
		cout << "No";
		return 0;
	}
	while (i < j) {
		if (str[i] != str[j]) {
			ok = true;
			break;
		}
		i++, j--;
	}
	if (ok)
		cout << "No";
	else {
		cout << "Yes";
	}
	return 0;
}