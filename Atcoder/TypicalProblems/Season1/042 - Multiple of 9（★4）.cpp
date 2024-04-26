#include <assert.h>
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
    int k;
    cin >> k;
    if(k % 9 != 0){
        cout << 0 << endl;
        return 0;
    }

    vector<int> dp(k+1);
    dp[0] = 1;
    for(int i = 1; i <= k; i++){
        int B = min(i, 9);
        for(int j = 1; j <= B; j++){
            dp[i] += dp[i - j];
            dp[i] %= 1000000007;
        }
    }

    cout << dp[k] << endl;
}