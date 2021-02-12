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

    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];

    int k;
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];

    int ans = 0;

    for(int bit=0; bit<(1<<k); bit++){
        vector<bool> check(n+1);
        rep(i, k){
            if((bit>>i) & 1) check[c[i]] = true;
            else check[d[i]] = true;
        }

        int tmp = 0;
        rep(i, m) tmp += (check[a[i]] && check[b[i]]);
        chmax(ans, tmp);
    }

    cout << ans << endl;
}