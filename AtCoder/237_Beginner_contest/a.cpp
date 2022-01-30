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
	long long val = 2147483647;
	long long val1 = -2147483648;
	long long t;
	cin >> t;
	if (t >= val1 && t <= val)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}