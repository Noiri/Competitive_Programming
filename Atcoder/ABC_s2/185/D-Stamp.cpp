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
#include <sstream>


#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;


int main() {
	int n, m;
	cin >> n >> m;

	vector<int> v(m+1);
	rep(i, m) cin >> v[i+1];
	v.push_back(n+1);
	sort(all(v));

	auto solve = [&]() -> int {
		using P = pair<int, int>;
		vector<int> u;
		rep(i, m+1) {
			int len = v[i + 1] - v[i] - 1;
			if (len > 0) u.push_back(len);
		}

		if (u.empty()) return 0;

		sort(all(u));
		int k = u[0];

		int ans = 0;
		for (auto len : u) ans += (len / k + (len % k != 0));

		return ans;
	};

	if (m > 0) cout << solve() << endl;
	else cout << 1 << endl;
}