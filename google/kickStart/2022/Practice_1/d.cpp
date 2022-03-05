#include <bits/stdc++.h>
#define nl "\n"
#define vll vector<ll>
#define ll long long
#define pb push_back
using namespace std;
vll vp;
void pre() {
	ll start = 1;
	for (ll i = 1; i <= 30; i++)
	{     start = start * i;     vp.pb(start);   }
}
void solve()
{	ll n;
	cin >> n;
	ll res = n;
	ll p = pow(2, 15);
	for (ll i = 0; i <= p; i++)
	{	ll temp = 0, temp_res = 0;
		for (ll j = 0; j <= 20; j++)
		{	ll cand = 1 << j;
			if (cand & i)
			{	temp++;
				temp_res += vp[j];
			}
		}     ll cnt = 0;
		ll x = n - temp_res;
		while (x)
		{
			if (x & 1)
			{         cnt++;       }
			x /= 2;
		}
		if (temp_res <= n)
		{	res = min(res, temp + cnt);
		}
	}
	cout << res;   cout << endl;
}   int main() {
	pre();
	your code goes here   long long ht;   cin >> ht;      for (long long i = 0; i < ht; i++) { solve(); }    return 0;
}