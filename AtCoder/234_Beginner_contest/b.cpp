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
struct Point {
	ll x, y;
	double Dist(Point p1, Point p2) {
		double i = p1.x - p2.x;
		double j = p1.y - p2.y;
		i *= i;
		j *= j;
		double res = (i + j);
		res = sqrt(res);
		return res;
	}
};
void JaiShreeRam() {
//write your code here
	int n;
	cin >> n;
	Point p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}
	double ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double dist = p[i].Dist(p[i], p[j]);
			ans = max(ans, dist);
		}
	}
	cout << fixed << showpoint << setprecision(10) << ans;



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