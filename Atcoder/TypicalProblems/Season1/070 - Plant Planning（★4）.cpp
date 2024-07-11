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

    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    sort(all(x));
    sort(all(y));

    ll ans = 0;
    if(n % 2){
        rep(i, n) ans += abs(x[i] - x[n/2]) + abs(y[i] - y[n/2]);
    }
    else{
        rep(i, n) ans += abs(x[i] - x[n/2]) + abs(y[i] - y[n/2]);
        ll tmp = 0;
        rep(i, n) tmp += abs(x[i] - x[n/2 - 1]) + abs(y[i] - y[n/2 - 1]);
        chmin(ans, tmp);
    }

    cout << ans << endl;
}