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
	/*
	* 同率一位を数える
	* 全ての点について、一位の集合に含まれるかどうかチェックする
	* 交点に位置する点の数がn(H1)xn(W1)のとき 和-1, そうでなければただの和
	*/

	int h, w, m;
	cin >> h >> w >> m;

	// count, pos
	using P = pair<int, int>;
	vector<P> r(h), c(w), point(m);

	rep(i, m) {
		int y, x;
		cin >> y >> x;
		y--; x--;
		point[i] = { y, x };
		r[y].first++;
		c[x].first++;
	}

	// 個数にインデックスを振る
	rep(i, h) r[i].second = i;
	rep(i, w) c[i].second = i;

	sort(rall(r));
	sort(rall(c));

	// 同率１位の集合を生成
	set<int> A, B;
	rep(i, h) {
		if (r[0].first != r[i].first) break;
		A.insert(r[i].second);
	}
	rep(i, w) {
		if (c[0].first != c[i].first) break;
		B.insert(c[i].second);
	}


	ll count = 0;
	rep(i, m) {
		if (A.find(point[i].first) != A.end() && B.find(point[i].second) != B.end()) count++;
	}

	ll S = ll(A.size()) * ll(B.size());
	if (count < S) cout << r[0].first + c[0].first << endl;
	else cout << r[0].first + c[0].first - 1 << endl;
}