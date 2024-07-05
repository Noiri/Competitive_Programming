#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

bool dp[101][100001];

int main(){
    int n, s;
    cin >> n >> s;

    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    dp[0][0] = true;
    rep(i, n){
        rep(j, s + 1){
            if(dp[i][j]){
                if(j + a[i] <= s) dp[i + 1][j + a[i]] = true;
                if(j + b[i] <= s) dp[i + 1][j + b[i]] = true;
            }
        }
    }

    if(!dp[n][s]){
        cout << "Impossible" << endl;
        return 0;
    }


    // dpテーブルを利用して解を復元する
    string ans = "";
    int price = s;
    for(int i = n; i > 0; i--){
        if(price - a[i - 1] >= 0 && dp[i - 1][price - a[i - 1]]){
            ans += "A";
            price -= a[i - 1];
        }
        else if(price - b[i - 1] >= 0 && dp[i - 1][price - b[i - 1]]){
            ans += "B";
            price -= b[i - 1];
        }
    }

    reverse(all(ans));
    cout << ans << endl;
}