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
    ll mod = 1e9 + 7;
    int n, l;
    cin >> n >> l;
    vector<ll> dp(n+1);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        dp[i+1] += dp[i];
        dp[i+1] %= mod;
        if(i+l <= n){
            dp[i+l] += dp[i];
            dp[i+l] %= mod;
        } 
    }

    cout << dp[n] << endl;
}