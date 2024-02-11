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
    vector<string> m(n);
    rep(i, n) cin >> m[i];

    vector<ll> row(n), col(n);
    rep(i, n){
        ll cnt = 0;
        rep(j, n) cnt += (m[i][j] == 'o');
        row[i] = cnt;
    }
    rep(j, n){
        ll cnt = 0;
        rep(i, n) cnt += (m[i][j] == 'o');
        col[j] = cnt;
    }

    ll ans = 0;
    rep(i, n){
        rep(j, n){
            if(m[i][j] == 'o' && row[i] >= 2 && col[j] >= 2){
                ans += (row[i] - 1) * (col[j] - 1);
            } 
        }
    }
    cout << ans << endl;
}