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
const ll n = 40000;
bool prime[n + 1], primesquare[n * n + 1];
ll a[n]; // for storing primes upto n
void SieveOfEratosthenes()
{


	for (ll i = 2; i <= n; i++)
		prime[i] = true;


	for (ll i = 0; i <= (n * n + 1); i++)
		primesquare[i] = false;


	prime[1] = false;

	for (ll p = 2; p * p <= n; p++) {


		if (prime[p] == true) {

			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	ll j = 0;
	for (ll p = 2; p <= n; p++) {
		if (prime[p]) {

			a[j] = p;

			primesquare[p * p] = true;
			j++;
		}
	}
}


ll countDivisors(ll n)
{

	if (n == 1)
		return 1;

	ll ans = 1;

	for (ll i = 0;; i++) {

		if (a[i] * a[i] * a[i] > n)
			break;

		ll cnt = 1; // cnt is power of prime a[i] in n.
		while (n % a[i] == 0) // if a[i] is a factor of n
		{
			n = n / a[i];
			cnt = cnt + 1; // incrementing power
		}

		ans = ans * cnt;
	}


	if (prime[n])
		ans = ans * 2;


	else if (primesquare[n])
		ans = ans * 3;


	else if (n != 1)
		ans = ans * 4;

	return ans;
}

void JaiShreeRam() {
//write your code here
	ll test;
	cin >> test;
	SieveOfEratosthenes();
	vector<ll>top(31270);
	for (ll i = 2; i <= 31255; i++) {
		ll res = countDivisors(i);
		top[i] = res;
	}

	while (test--) {
		ll n; cin >> n;
		ll k = LLONG_MAX, cnt = 0;
		for (ll i = 2; i * i <= n; i += 1LL) {
			if (n % i == 0) {
				ll res = countDivisors(i);
				if (res > cnt) {
					cnt = res;
					k = i;
				}
			}
		}
		if (k == LLONG_MAX)
			cout << n << endl;
		else
			cout << k << endl;
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