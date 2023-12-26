#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

ll pow_ll(ll n){
    ll ret = 1;
    rep(i, n) ret *= 2;
    return ret;
}

int main(){
    ll n;
    cin >> n;

    string bn = "";
    while(n > 0){
        if(n%2 == 1) bn += "1";
        else bn += "0";
        n /= 2;
    }

    // 2進数のどの桁が1かを記録
    vector<ll> flag;
    rep(i, bn.size()){
        if(bn[i] == '1') flag.push_back(i);
    }

    for(int bit = 0; bit < (1 << flag.size()); bit++){
        ll ans = 0;
        rep(i, flag.size()){
            if(bit & (1 << i)){
                ans += pow_ll(flag[i]);
            }
        }
        cout << ans << endl;
    }
}