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
int solve(vector<vector<int>>&store, int initial) {
	int score = 0;
	for (int i = 0; i < store.size(); i++) {
		if (store[i][0] == initial)
			initial = store[i][1];
		else if (store[i][1] == initial)
			initial = store[i][0];
		if (store[i][2] == initial)
			score++;
	}
	return score;
}
void JaiShreeRam() {
//write your code here
	int numberOfSwaps;
	cin >> numberOfSwaps;
	vector<vector<int>>store(numberOfSwaps, vector<int>(3));
	for (int i = 0; i < numberOfSwaps; i++) {
		for (int j = 0; j < 3; j++)
			cin >> store[i][j];
	}
	int ans = INT_MIN;
	for (int i = 1; i <= 3; i++)
		ans = max(ans, solve(store, i));
	cout << ans;


}
//////////////////////////////////////////////JAI SHREE RAM /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
#ifndef ONLINE_JUDGE
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	fastIO();
	JaiShreeRam();
	return 0;
}
// set precisoin:  using cout<<fixed<<showpoint<<setprecision(n)<<ans;