#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <climits>


#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;
const ll INF = 1e18;

struct UnionFind {
	vector<int> par;
	vector<int> sizes;
	vector<int> maxs;
	vector<int> mins;

	UnionFind(int n) :
		par(n), sizes(n, 1), maxs(n), mins(n) {
		rep(i, n) par[i] = i;
		rep(i, n) maxs[i] = i;
		rep(i, n) mins[i] = i;
	}

	int root(int x) {
		if (x == par[x]) return x;
		else return par[x] = root(par[x]);
	}

	bool merge(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;
		if (sizes[x] < sizes[y]) swap(x, y);
		par[y] = x;
		maxs[x] = max(maxs[y], maxs[x]);
		mins[x] = min(mins[y], mins[x]);
		sizes[x] += sizes[y];
		return true;
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int size(int x) {
		return sizes[root(x)];
	}

	int getMax(int x) {
		return maxs[root(x)];
	}

	int getMin(int x) {
		return mins[root(x)];
	}

};


int main() {
	int n, m;
	cin >> n >> m;
	
	UnionFind uf(n);
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		uf.merge(a-1, b-1);
	}

	int ans = 0;
	rep(i, n) chmax(ans, uf.size(i));

	cout << ans << endl;
}