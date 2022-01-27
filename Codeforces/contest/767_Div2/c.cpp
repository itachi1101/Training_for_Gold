#include<bits/stdc++.h>

using namespace std;
/////////////////////////////////////////////// JAI SHREE RAM /////////////////////////////////////////////////////////////////////
#define mem(x, y)                   memset(x,y,sizeof(x))
#define pb                         push_back
#define MOD                        1000000007
const int mod = 1e9 + 7;
#define PI                         3.141592653589793
#define setBitCount(x)             __builtin_popcount(x)
#define all(a)                     (a).begin(), (a).end()
#define all_r(a)                   (a).rbegin(), (a).rend()
#define sz(x)                      (int)(x.size())
#define endl                       '\n'
#define mxn                         200005
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }

void _print(int t) { cerr << t; }

void _print(string t) { cerr << t; }

void _print(char t) { cerr << t; }

void _print(lld t) { cerr << t; }

void _print(double t) { cerr << t; }

void _print(ull t) { cerr << t; }

template<class T, class V>
void _print(pair<T, V> p);

template<class T>
void _print(vector<T> v);

template<class T>
void _print(set<T> v);

template<class T, class V>
void _print(map<T, V> v);

template<class T>
void _print(multiset<T> v);

template<class T, class V>
void _print(pair<T, V> p) {
	cerr << "{";
	_print(p.ff);
	cerr << ",";
	_print(p.ss);
	cerr << "}";
}

template<class T>
void _print(vector<T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

template<class T>
void _print(set<T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

template<class T>
void _print(multiset<T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

template<class T, class V>
void _print(map<T, V> v) {
	cerr << "[ ";
	for (auto i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
void google(int t, int ans) {
	cout << "Case #" << t << ": " << ans << endl;
	return;
}

string yes = "YES";
string no = "NO";
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
long long Multiply(long long a, long long b, long long mod) {
	long long res = 0;
	a %= mod;
	while (b) {
		if (b & 1)
			res = (res + a) % mod;
		a = (2 * a) % mod;

		b >>= 1;
	}

	return res;
}

ll powerMod(ll x, ll y, ll p) {
	ll res = 1;
	x = x % p;
	if (x == 0) return 0;
	while (y > 0) {
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

vector<bool> seieve;

void prime() {
	seieve.resize(200005, 1);
	for (int i = 2; i * i <= 200005; i++) {

		if (seieve[i]) {
			for (int j = i * i; j <= 200005; j += i) {
				seieve[j] = false;
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		vector<int>freq(n + 1);
		for (int i = 0; i < n; i++)
			freq[v[i]]++;
		int i = 0;
		vector<int>ans;
		while (i < n) {
			int mex = 0;
			while (freq[mex] > 0)
				mex += 1;

			vector<bool>visited(mex);
			int found = 0;
			while (i < n) {
				if (v[i] < mex && !visited[v[i]]) {
					visited[v[i]] = true;
					found += 1;
				}
				freq[v[i]] -= 1;
				i += 1;
				if (found == mex)
					break;
			}
			ans.pb(mex);
		}
		cout << ans.size() << endl;
		for (auto child : ans)
			cout << child << " ";
		cout << endl;
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