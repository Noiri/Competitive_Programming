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
	vector<int> u(n), v(n);
	rep(i, n) {
		int x, y;
		cin >> x >> y;
		u[i] = x + y;
		v[i] = x - y;
	}
	sort(all(u));
	sort(all(v));
	
	cout << max(abs(u[n - 1] - u[0]), abs(v[n - 1] - v[0])) << endl;
}