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
	for (int t = 1; t <= test; t++) {
		int r, c; cin >> r >> c;
		vector<string>grid(r);
		for (auto&row : grid) {
			for (int i = 0; i < c; i++) {
				string cell; cin >> cell;
				row += cell;
			}
		}
		vector<vector<int>>left(r, vector<int>(c, 0));
		vector<vector<int>>right(r, vector<int>(c, 0));
		vector<vector<int>>up(r, vector<int>(c, 0));
		vector<vector<int>>down(r, vector<int>(c, 0));

		for (int row = 0; row < r; row++) {
			for (int col = 0; col < c; col++) {
				left[row][col] = grid[row][col] == '1' ? (col > 0 ? left[row][col - 1] : 0) + 1 : 0;
				up[row][col] = grid[row][col] == '1' ? (row > 0 ? up[row - 1][col] : 0) + 1 : 0;

			}
		}
		for (int row = r - 1; row >= 0; row--) {
			for (int col = c - 1; col >= 0; col--) {
				right[row][col] = grid[row][col] == '1' ? (col < c - 1 ? right[row][col + 1] : 0) + 1 : 0;
				down[row][col] = grid[row][col] == '1' ? (row < r - 1 ? down[row + 1][col] : 0) + 1 : 0;
			}
		}
		ll ans = 0;
		for (int row = 0; row < r; row++) {
			for (int col = 0; col < c; col++) {
				ans += max(min(left[row][col], up[row][col] / 2) - 1, 0);
				ans += max(min(up[row][col], right[row][col] / 2) - 1, 0);
				ans += max(min(right[row][col], down[row][col] / 2) - 1, 0);
				ans += max(min(down[row][col], left[row][col] / 2) - 1, 0);

				ans += max(min(up[row][col], left[row][col] / 2) - 1, 0);
				ans += max(min(right[row][col], up[row][col] / 2) - 1, 0);
				ans += max(min(down[row][col], right[row][col] / 2) - 1, 0);
				ans += max(min(left[row][col], down[row][col] / 2) - 1, 0);
			}
		}
		google(t, ans);
	}
}

//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

	fastIO();
	JaiShreeRam();
	return 0;
}

// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;