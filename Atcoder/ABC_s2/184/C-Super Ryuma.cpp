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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	auto solve = [&]() -> int {
		int p = abs(a - c);
		int q = abs(b - d);

		if (p == 0 && q == 0) return 0;
		if (p == q || p + q <= 3) return 1;
		if ((p + q) % 2 == 0 || p + q <= 6 || abs(p - q) <= 3) return 2;
		return 3;
	};

	cout << solve() << endl;
}