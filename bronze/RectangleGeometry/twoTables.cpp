#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
ll solve( int w, int h, int x1, int y1, int x2, int y2, int w2, int h2 ) {
	int w1 = x2 - x1;
	int h1 = y2 - y1;
	int movex = -1, movey = -1;
	if ( w1 + w2 <= w ) movex = max(w2 - max(x1, (w - x2)), 0);
	if ( h1 + h2 <= h ) movey = max(h2 - max(y1, h - y2), 0);
	int mov;
	if ( movex == -1 && movey != -1 ) mov = movey;
	else if ( movex != -1 && movey == -1 ) mov = movex;
	else if ( movex != -1 && movey != -1 ) mov = min(movex, movey);
	else mov = -1;
	return mov;
}
int main() {
	int tt, w, h, x1, y1, x2, y2, wide, height;
	cin >> tt;
	while ( tt-- ) {
		cin >> w >> h >> x1 >> y1 >> x2 >> y2 >> wide >> height;
		cout << solve(w, h, x1, y1, x2, y2, wide, height) << endl;
	}
}
