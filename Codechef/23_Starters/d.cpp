# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
const int limit = 1e5 + 10;
int a[limit];
void pre() {
	a[1] = 1;
	for (int i = 2; i <= limit; i++) {
		a[i] = (i ^ (i - 1));
	}
}
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
	pre();
	while (test--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;

	}
	return 0;
}



