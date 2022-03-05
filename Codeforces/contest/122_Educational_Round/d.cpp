# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
class test {
public:
	int x = 1;
	test(int i) {
		x = i;
	}
};
void solve(int A) {
	while (A % 31 == 0) {
		cout << A << " ";
		A /= 3;
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
	int a; cin >> a;
	solve(a);
	return 0;
}