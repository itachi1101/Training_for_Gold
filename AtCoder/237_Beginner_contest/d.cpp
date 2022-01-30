# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	// write you code here
	stack<int>st;
	st.push(0);
	int i = 1;
	int n; cin >> n;
	string str; cin >> str;
	vector<int>temp;
	for (auto child : str) {
		if (child == 'L') {
			st.push(i);
		}
		else {
			while (st.top() != i - 1 && !st.empty()) {
				temp.push_back(st.top());
				st.pop();
			}
			temp.push_back(st.top());
			st.pop();
			st.push(i);
		}

		i++;
	}
	vector<int>ans;
	while (!st.empty()) {
		int curr = st.top();
		st.pop();
		ans.push_back(curr);
	}

	for (auto child : temp)
		cout << child << " ";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}