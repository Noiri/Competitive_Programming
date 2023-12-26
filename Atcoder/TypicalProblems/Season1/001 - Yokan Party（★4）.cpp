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
int n, l, k;
vector<int> piece;

bool check(ll mid){
    int cnt = 0;
    int len = 0;
    rep(i, piece.size()){
        len += piece[i];
        if(len >= mid){
            cnt++;
            len = 0;
        }
    }
    return (cnt >= k+1);
}

ll binary_search(){
    ll ng = INF;
    ll ok = 0;
    
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(check(mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main(){
    cin >> n >> l >> k;
    vector<int> a(n+1);
    rep(i, n) cin >> a[i+1];
    a.push_back(l);
    
    piece.resize(n+1);
    rep(i, a.size()-1) piece[i] = a[i+1] - a[i];

    cout << binary_search() << endl;
}