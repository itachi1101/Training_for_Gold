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

void JaiShreeRam() {
//write your code here
	Rect a, b;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	int length = max(a.x2, b.x2) - min(a.x1, b.x1);
	int width =  (max(a.y2, b.y2) - min(a.y1, b.y1));
	cout << max(length * length, width * width);
}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
#ifndef ONLINE_JUDGE
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	JaiShreeRam();
	return 0;
}
// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;