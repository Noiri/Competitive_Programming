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
    ll n, t;
    cin >> n >> t;

    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    using P = pair<ll, ll>;
    vector<P> events;
    rep(i, n){
        events.push_back(P{a[i]-1, c[i]});
        events.push_back(P{b[i], -c[i]});
    }

    sort(all(events));

    ll ans = 0, fee = 0, left = 0;
    for(auto [x, cost]: events){
        if(x != left){
            ans += min(t, fee) * (x - left);
            left = x;
        }
        fee += cost;
    }

    cout << ans << endl;
}