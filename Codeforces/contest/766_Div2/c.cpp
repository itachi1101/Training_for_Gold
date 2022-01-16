#include<bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////// JAI SHREE RAM /////////////////////////////////////////////////////////////////////
#define mem(x, y)                   memset(x,y,sizeof(x))
#define pb                         push_back
#define all(a)                     (a).begin(), (a).end()
#define all_r(a)                   (a).rbegin(), (a).rend()
#define sz(x)                      (int)(x.size())
#define endl                       '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void fastIO() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
string yes = "YES";
string no = "NO";
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int N = 300009;
vector<int> a[N];
map<pair<int, int>, int> m;
ll l[N], r[N];
void dfs(ll n, ll p, ll d)
{
	for (auto x : a[n])
	{
		if (x != p)
		{
			m[ {n, x}] = m[ {x, n}] = 2 + d;
			dfs(x, n, 1 - d);
		}
	}
}
void JaiShreeRam() {
//write your code here
	ll T, tt = 1, n, i, ind;
	cin >> T;
	while (T--)
	{
		m.clear();
		cin >> n;
		i = 1;
		while (i <= n)
		{
			a[i].clear();
			i++;
		}
		i = 0;
		while (i < n - 1)
		{
			cin >> l[i] >> r[i];
			a[l[i]].pb(r[i]);
			a[r[i]].pb(l[i]);
			i++;
		}
		i = 1;
		while (i <= n)
		{
			if (a[i].size() > 2)
				break;
			if (a[i].size() == 1)
				ind = i;
			i++;
		}
		if (i <= n)
		{
			cout << -1 << endl;
			continue;
		}
		dfs(ind, -1, 0);
		i = 0;
		while (i < n - 1)
		{
			cout << m[ {l[i], r[i]}] << " ";
			i++;
		}
		cout << "\n";
	}
}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	JaiShreeRam();
	return 0;
}
// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;