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
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> f(n);
    rep(i, n) cin >> f[i];
    sort(rall(f));

    ll sum = 0;
    rep(i, n) sum += f[i];

    ll ans = sum;
    rep(i, n){
        sum -= f[i];
        if((i+1)%d == 0){
            sum += p;
            chmin(ans, sum);
        }
    }

    ll tmp = n/d + (n%d != 0);
    chmin(ans, tmp*p);

    cout << ans << endl;
}