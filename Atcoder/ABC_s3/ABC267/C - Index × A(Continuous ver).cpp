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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans_tmp = 0;
    ll sum = 0;
    rep(i, m){
        ans_tmp += (i+1) * a[i];
        sum += a[i];
    } 
    if(n == m){
        cout << ans_tmp << endl;
        return 0;
    }

    ll ans = ans_tmp;
    for(int i = m; i < n; i++){
        ans_tmp = ans_tmp - sum + m*a[i];
        chmax(ans, ans_tmp);
        sum = sum - a[i-m] + a[i];
    }

    cout << ans << endl;
}