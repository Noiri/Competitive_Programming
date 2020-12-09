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


const int INF = 1e9+1;


int main() {
    int n, k;
    cin >> n >> k;
    vector<double> v(n);
    rep(i, n) cin >> v[i];


    function<bool(ll)> check = [&](ll mid) {
        int c = 0;
        rep(i, n) {
            int tmp = ceil((v[i] / mid) - 1.0);
            if (tmp < 0) continue;
            c += tmp;
        }

        return (c <= k);
    };

    function<ll(void)> binary_search = [&]() {
        ll ng = 0; //長さが0になることは無い(1以上になる)ので下限に気をつける.
        ll ok = INF;//1度も切れないとき、かつ、v[i]=1e9のときに、ans=1e9になるので、上限は1e9+1.
        while (abs(ok - ng) > 1) {
            ll mid = (ok + ng) / 2;
            if (check(mid)) ok = mid;
            else ng = mid;
        }
        return ok;
    };

	cout << binary_search() << endl;
}