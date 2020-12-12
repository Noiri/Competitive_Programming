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
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<char>> v(h, vector<char>(w));
    int s = 0;
    rep(i, h) {
        rep(j, w) {
            cin >> v[i][j];
            s += (v[i][j] == '#');
        }
    }

    int ans = 0;

    for (int by = 0; by < (1 << h); by++) {
        for (int bx = 0; bx < (1 << w); bx++) {
            int cnt = 0;
            vector<vector<int>> mask(h, vector<int>(w));
            rep(i, h) {
                if (((by >> i) & 1) == 0) continue;
                rep(j, w) mask[i][j] = 1;
            }
            rep(i, w) {
                if (((bx >> i) & 1) == 0) continue;
                rep(j, h) mask[j][i] = 1;
            }
            rep(i, h) {
                rep(j, w) cnt += (mask[i][j] && v[i][j] == '#');
            }

            if ((s - cnt) == k) ans++;
        }
    }

    cout << ans << endl;
}