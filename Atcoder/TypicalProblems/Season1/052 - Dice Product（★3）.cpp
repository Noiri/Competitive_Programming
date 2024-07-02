#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;
ll const MOD = 1e9 + 7;

int main(){
    int n;
    cin >> n;
    ll ans = 1;
    rep(i, n){
        ll tmp = 0;
        rep(j, 6){
            ll a;
            cin >> a;
            tmp += a;
        }
        ans *= tmp;
        ans %= MOD;
    }
    cout << ans << endl;
}