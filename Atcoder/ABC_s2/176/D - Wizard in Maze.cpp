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
	int h, w;
	cin >> h >> w;
	int sh, sw, th, tw;
	cin >> sh >> sw >> th >> tw;

	vector<vector<char>> m(h, vector<char>(w));
	rep(i, h) {
		rep(j, w) {
			cin >> m[i][j];
		}
	}

	function<bool(int, int)> isIN = [&](int y, int x) {
		return 0 <= y && y < h && 0 <= x && x < w;
	};

	const int INF = 1e9;
	vector<vector<int>> d(h, vector<int>(w, INF));
	d[sh - 1][sw - 1] = 0;

	using P = pair<int, int>;
	queue<P> que;
	que.push({ sh - 1, sw - 1 });

	int dy[] = { -1, 1, 0, 0 };
	int dx[] = { 0, 0, 1, -1 };

	while (que.size() != 0) {
		queue<P> warp;

		//cost0(walk)
		while (que.size() != 0) {
			int y, x;
			tie(y, x) = que.front();

			warp.push({ y, x });

			que.pop();
			rep(i, 4) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (isIN(ny, nx) && m[ny][nx] == '.' && d[ny][nx] > d[y][x]) {
					d[ny][nx] = d[y][x];
					que.push({ ny, nx });
					warp.push({ ny, nx });
				}
			}
		}

		//cost1(warp)
		while (warp.size() != 0) {
			int y, x;
			tie(y, x) = warp.front();
			warp.pop();

			for (int i = -2; i <= 2; i++) {
				for (int j = -2; j <= 2; j++) {
					int ny = y + i;
					int nx = x + j;
					if (isIN(ny, nx) && m[ny][nx] == '.' && d[ny][nx] > d[y][x] + 1) {
						d[ny][nx] = d[y][x] + 1;
						que.push({ ny, nx });
					}
				}
			}

		}
		

	}

	int ans = d[th - 1][tw - 1];
	if (ans == INF) cout << -1 << endl;
	else cout << ans << endl;
}