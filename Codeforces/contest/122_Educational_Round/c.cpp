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
		long long  hc, dc, hm, dm, k, w, a;
		cin >> hc >> dc >> hm >> dm >> k >> w >> a;
		auto check = [&](ll attack, ll health, ll monsterHealth, ll monsterAttack) {
			ll stepsHero = ceil((double)monsterHealth / attack);
			ll stepsMonster = ceil((double)health / monsterAttack);
			if (stepsHero <= stepsMonster)
				return true;
			else
				return false;
		};
		long long left = k, right = 0;
		long long nh, na;
		bool ok = false;
		while (right <= k) {
			nh = hc + (left * a);
			na = dc + (right * w);
			if (check(na, nh, hm, dm)) {
				ok = true;
				break;
			}
			left--, right++;

		}
		if (ok)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}