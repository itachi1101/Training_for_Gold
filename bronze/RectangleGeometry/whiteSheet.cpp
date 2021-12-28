// whiteSheet.cpp
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
struct Rect {
	ll x1, y1, x2, y2;
	ll area() {
		return (abs(y2 - y1) * abs(x2 - x1));
	}
};
ll interset(Rect a, Rect b) {
	ll xOverlap = max(0LL, min(a.x2, b.x2) - max(a.x1, b.x1));
	ll yOverlap = max(0LL, min(a.y2, b.y2) - max(a.y1, b.y1));
	return xOverlap * yOverlap;
}
ll intersetThree(Rect a, Rect b, Rect c) {
	ll xOverlap = max(min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1), (ll)0);
	ll yOverlap = max(min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1), (ll)0);
	return xOverlap * yOverlap;
}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void JaiShreeRam() {
//write your code here
	Rect w, a, b;
	cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	ll firstOverlap = interset(w, a);
	ll secondOverlap = interset(w, b);
	ll thirdOverlap = intersetThree(w, a, b);
	ll whiteArea = w.area();
	ll areaLeft = whiteArea - firstOverlap - secondOverlap + thirdOverlap;
	if (areaLeft <= 0)
		cout << no;
	else cout << yes;
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