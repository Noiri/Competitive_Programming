#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

ll INF = 1e18;
vector<int> a, b;

bool check(ll mid){
    int sell = 0, buy = 0;
    for(auto x: a) sell += (x <= mid);
    for(auto x: b) buy += (x >= mid);
    return (sell >= buy);
}

ll binary_search(){
    ll ng = -1;
    ll ok = INF;
    
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(check(mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(){
    int n, m;
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    int ans = binary_search();
    cout << ans << endl;
}