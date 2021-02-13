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
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<vector<ll>> dp(n+1, vector<ll>(2));
    dp[0][0] = 1, dp[0][1] = 1;

    rep(i, n){
        if(s[i] == "AND"){
            dp[i+1][0] = (dp[i][0]);
            dp[i+1][1] = (dp[i][0] + 2*dp[i][1]);
        }
        if(s[i] == "OR"){
            dp[i+1][0] = (2*dp[i][0] + dp[i][1]);
            dp[i+1][1] = (dp[i][1]);
        }
    }

    cout << dp[n][0] << endl;
}