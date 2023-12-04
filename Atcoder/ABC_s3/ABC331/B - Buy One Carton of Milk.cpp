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
    int n, s, m, l;
    cin >> n >> s >> m >> l;

    int ans = 1e9;
    rep(i, 101){
        rep(j, 101){
            rep(k, 101){
                if(n <= 6*i + 8*j + 12*k){
                    chmin(ans, i*s + j*m + k*l);
                }
            }
        }
    }

    cout << ans << endl;
}