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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll ans = 10000;
    for(ll i = 0; i < 10000; i++){
        for(ll j = 0; j < 10000; j++){
            if(n - a*i - b*j >= 0 && (n - a*i - b*j) % c == 0){
                chmin(ans, i + j + (n - a*i - b*j) / c);
            }
        }
    }

    cout << ans << endl;
}