//clear adj and visited vector declared globally after each test case
//check for long long overflow
//Mod wale question mein last mein if dalo ie. Ans<0 then ans+=mod;
//Incase of close mle change language to c++17 or c++14
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);cout.precision(dbl::max_digits10);
#define pb push_back
#define mod 1000000007ll //998244353ll
#define lld long double
#define mii map<int, int>
#define pii pair<int, int>
#define ll long long
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=x; i<y; i++)
#define fill(a,b) memset(a, b, sizeof(a))
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define print2d(dp,n,m) for(int i=0;i<=n;i++){for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
typedef std::numeric_limits< double > dbl;
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set
const long long N = 200005, INF = 2000000000000000000;
lld pi = 3.1415926535897932;
int lcm(int a, int b)
{
	int g = __gcd(a, b);
	return a / g * b;
}
int power(int a, int b, int p)
{
	if (a == 0)
		return 0;
	int res = 1;
	a %= p;
	while (b > 0)
	{
		if (b & 1)
			res = (1ll * res * a) % p;
		b >>= 1;
		a = (1ll * a * a) % p;
	}
	return res;
}
lld solve_avg(vi a)
{
	int n = a.size();
	lld lb = 0.0, ub = 2e9, avg = 0.0, eps = 1e-9;
	rep(i, 0, 80)
	{
		lld md = (lb + ub) / 2.0;
		vector <lld> v(n);
		rep(i, 0, n)
		v[i] = (lld)a[i] - md;
		lld dp[n][2];
		dp[0][1] = v[0];
		dp[0][0] = 0;
		rep(j, 1, n)
		{
			dp[j][1] = max(dp[j - 1][0], dp[j - 1][1]) + v[j];
			dp[j][0] = dp[j - 1][1];
		}
		// cout<<md<<" "<<dp[n-1][0]<<"\n";
		if (max(dp[n - 1][0], dp[n - 1][1]) + eps > 0.0)
		{
			avg = md;
			lb = md;
		}
		else
			ub = md;
	}
	return avg;
}
int solve_median(vi a)
{
	int lb = 0, ub = 1e9 + 10, med = 0, n = a.size();
	while (lb <= ub)
	{
		int md = (lb + ub) / 2;
		int dp[n][2];
		vi v(n);
		rep(i, 0, n)
		{
			if (a[i] >= md)
				v[i] = 1;
			else
				v[i] = -1;
		}
		dp[0][0] = 0;
		dp[0][1] = v[0];
		rep(j, 1, n)
		{
			dp[j][1] = max(dp[j - 1][0], dp[j - 1][1]) + v[j];
			dp[j][0] = dp[j - 1][1];
		}
		if (max(dp[n - 1][0], dp[n - 1][1]) > 0)
		{
			med = md;
			lb = md + 1;
		}
		else
			ub = md - 1;
	}
	return med;
}
int32_t main()
{
	IOS;
	int n;
	cin >> n;
	vector <int> a(n);
	rep(i, 0, n)
	cin >> a[i];
	cout << solve_avg(a) << "\n";
	cout << solve_median(a);
}