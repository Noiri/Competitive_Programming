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
    vector<vector<ll>> memo(3, vector<ll>(46));

    rep(i, 3){
        rep(j, n){
            int x;
            cin >> x;
            memo[i][x%46]++;
        }
    }

    ll ans = 0;
    rep(i, 46){
        rep(j, 46){
            rep(k, 46){
                if((i+j+k)%46 == 0) ans += memo[0][i] * memo[1][j] * memo[2][k];
            }
        }
    }

    cout << ans << endl;
}