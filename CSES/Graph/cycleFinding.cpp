# include<bits/stdc++.h>
using namespace std;
#define all(a)                     (a).begin(), (a).end()
#define endl                       '\n'
typedef long long ll;
struct Edge {
	int from, to; ll weight;
};
const int mXn = 2505;
int n, m, parent[mXn];
ll dist[mXn];
vector<Edge>graph;
void BellmanFord(int source) {
	fill(parent + 1, parent + n + 1, 0);
	fill(dist + 1, dist + n + 1, 1e18);
	dist[source] = 0;
	int last_node_updated;
	for (int i = 1; i <= n; i++) {
		last_node_updated = -1;
		for (auto&e : graph) {
			if (dist[e.from] + e.weight < dist[e.to]) {
				dist[e.to] = dist[e.from] + e.weight;
				parent[e.to] = e.from;
				last_node_updated = e.to;
			}
		}
	}
	if (last_node_updated == -1)
		cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		vector<int>cycle;
		for (int i = 0; i < n - 1; i++) {
			last_node_updated = parent[last_node_updated];
		}
		for (int x = last_node_updated;; x = parent[x]) {
			cycle.push_back(x);
			if (x == last_node_updated && cycle.size() > 1)
				break;
		}
		reverse(cycle.begin(), cycle.end());
		for (int x : cycle)
			cout << x << " ";
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	while (m--) {
		int a, b; ll c;
		cin >> a >> b >> c;
		graph.push_back({a, b, c});
	}
	BellmanFord(1);

	return 0;
}