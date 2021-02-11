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

    ll a = 0, b = 0;

    vector<ll> v(n), u(n);
    rep(i, n){
        cin >> v[i] >> u[i];
        a += v[i];
    } 

    using P = pair<ll, int>;
    vector<P> idx(n);
    rep(i, n) idx[i] = P{2*v[i] + u[i], i};
    sort(rall(idx));

    int ans = 0;
    rep(i, n){
        if(a < b) break;
        ans++;
        
        int cur = idx[i].second;
        a -= v[cur];
        b += (v[cur] + u[cur]);
    }

    cout << ans << endl;
}