#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll mod_pow(ll x, ll n){
    ll ret = 1;
    while(n > 0){
        if(n % 2) ret = (ret * x) % MOD;
        x = (x * x) % MOD;
        n /= 2;
    }
    return ret;
}

int main(){
    ll n, k;
    cin >> n >> k;

    ll ans = 1;
    if(n <= 2){
        rep(i, n) ans *= (k - i);
    }
    else if(n >= 3 && k < 3){
        ans = 0;
    }
    else{
        ans = (k * (k - 1)) % MOD;
        ans *= mod_pow(k - 2, n - 2);
        ans %= MOD;
    }

    cout << ans << endl;
}