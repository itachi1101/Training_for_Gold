// BlockedBillboardII.cpp
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
struct Rect {
	int x1, y1, x2, y2;
	int area() {
		return (y2 - y1) * (x2 - x1);
	}
};
bool covered(int x, int y, Rect a) {
	return x >= a.x1 && x <= a.x2 && y >= a.y1 && y <= a.y2;
}
void JaiShreeRam() {
//write your code here
	Rect a, b;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	// the overlap should be complete overlap otherwise the answer is board itself

	int corners = 0;
	if (covered(a.x1, a.y1, b))corners++;
	if (covered(a.x1, a.y2, b))corners++;
	if (covered(a.x2, a.y1, b))corners++;
	if (covered(a.x2, a.y2, b))corners++;


	if (corners < 2)
		cout << a.area();
	else if (corners == 4)
		cout << 0;
	else {
		int xl = max(a.x1, b.x1);
		int xr = min(a.x2, b.x2);
		int yl = max(a.y1, b.y1);
		int yr = min(a.y2, b.y2);
		cout << a.area() - (xr - xl)*(yr - yl);
	}

}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
#ifndef ONLINE_JUDGE
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	JaiShreeRam();
	return 0;
}
// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;