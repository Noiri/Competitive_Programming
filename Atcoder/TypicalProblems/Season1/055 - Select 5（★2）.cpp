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
    ll p, q;
    cin >> n >> p >> q;

    vector<ll> v(n);
    rep(i, n) cin >> v[i];

    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                for(int l = k+1; l < n; l++){
                    for(int m = l+1; m < n; m++){
                        ans += ((v[i] * v[j] % p * v[k] % p * v[l] % p * v[m] % p) % p == q);
                    }
                }
            }
        }
    }

    cout << ans << endl;
}