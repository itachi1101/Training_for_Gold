#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v, int i, int j, int k, int per) {
	if (v[i] + v[j] > v[k] && v[j] + v[k] > v[i] && v[i] + v[k] > v[j]) {
		return true;
	}
	return false;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int per;
	cin >> per;
	sort(arr.begin(), arr.end());

	cout << endl;
	int ans = 0;

	for (int i = n - 1; i >= 1; i--) {
		int low = 0, high = i - 1;
		while (low < high) {
			if (arr[low] + arr[high] > arr[i]) {
				if (arr[low] + arr[high] + arr[i] < per)
					ans += (high - low);
				high--;
			}
			else {
				low++;
			}
		}
	}

	cout << ans;
	return 0;
}