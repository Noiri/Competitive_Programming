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


int main() {
	int n;
	cin >> n;

	int R = 0, W = 0;
	vector<char> c(n);
	rep(i, n) {
		cin >> c[i];
		if (c[i] == 'R') R++;
		else W++;
	}

	const int INF = 1e9;
	int ans = min(n - R, n - W);

	int r = 0, w = 0;
	rep(i, n) {
		if (c[i] == 'R') r++;
		else w++;

		int mi = min(w, R - r);
		chmin(ans, (w - mi) + ((R - r) - mi) + mi);
	}

	cout << ans << endl;
}