// Robot_on_The_Board_1
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
void JaiShreeRam() {
//write your code here
	int test;
	cin >> test;
	while (test--) {
		int n, m;
		string s;
		cin >> n >> m >> s;
		int ansX = 1, ansY = 1;
		int deltaX = 0, deltaY = 0;
		int minDelataX = 0, maxDeltaX = 0;
		int minDeltaY = 0, maxDeltaY = 0;
		for (auto curr : s) {
			if (curr == 'L')
				deltaY--;
			if (curr == 'R')
				deltaY++;

			if (curr == 'U')
				deltaX--;
			if (curr == 'D')
				deltaX++;

			minDeltaY = min(minDeltaY, deltaY);
			maxDeltaY = max(maxDeltaY, deltaY);
			minDelataX = min(minDelataX, deltaX);
			maxDeltaX = max(maxDeltaX, deltaX);

			int maxX = n - maxDeltaX;
			int minX = 1 - minDelataX;
			int minY = 1 - minDeltaY;
			int maxY = m - maxDeltaY;

			if (minX <= maxX && minY <= maxY)
			{
				ansX = minX, ansY = minY;
			}
			else break;

		}
		cout << ansX << " " << ansY << endl;

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