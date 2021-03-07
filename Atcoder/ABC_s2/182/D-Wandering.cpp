#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    rep(i, n) cin >> v[i];

    ll ans = 0;
    ll now = 0;
    ll d = 0;
    ll d_max = 0;
    rep(i, n){
        d += v[i];
        chmax(d_max, d);
        chmax(ans, now + d_max);
        now += d;
    }

    cout << ans << endl;
}