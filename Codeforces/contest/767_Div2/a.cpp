#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define UNIQUE(c) sort(ALL(c)), c.erase(unique(ALL(c)), c.end())

const int INF = INT_MAX;

template<typename T> struct RangeMinQuery {
	int N, _N;
	vector<T> dat;
	T initial;

	RangeMinQuery(int _N, T initial = INF) : _N(_N), initial(initial) {
		assert(_N > 0);
		N = 1;
		while (N < _N)
			N <<= 1;
		dat.assign(2 * N - 1, initial);
	}

	void update(int k, T val) {
		assert(0 <= k && k < _N);
		k += N - 1;
		dat[k] = val;

		while (k > 0) {
			k = (k - 1) / 2;
			dat[k] = min(dat[2 * k + 1], dat[2 * k + 2]);
		}
	}

	// [a, b)
	T query(int a, int b) {
		assert(0 <= a && a <= b && b <= _N);
		return query(a, b, 0, 0, N);
	}

	T query(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return initial;
		if (a <= l && r <= b) return dat[k];

		int mid = (l + r) / 2;
		return min(query(a, b, 2 * k + 1, l, mid),
		           query(a, b, 2 * k + 2, mid, r));
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	int Q; cin >> Q;
	vector<vector<int>> queries(Q);
	vector<int> nums = {0, 0, 2, 1, 1, 1, 0, 0, 1, 1};
	for (auto child : nums)
		cout << child << " ";
	cout << endl;
	REP(i, Q) {
		int left, right; cin >> left >> right;
		nums.emplace_back(left);
		nums.emplace_back(right);
		queries[i] = {1, left, right};
	}
	UNIQUE(nums);
	map<int, int> idx2idx;
	REP(i, nums.size()) idx2idx[nums[i]] = i;
	RangeMinQuery<int> segt_min(nums.size());
	REP(i, nums.size()) {
		segt_min.update(i, nums[i]);
	}
	for (auto query : queries) {
		int left = query[1], right = query[2];
		cout << segt_min.query(idx2idx[left], idx2idx[right] + 1) << endl;
	}

	return 0;
}