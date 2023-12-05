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
    ll n;
    cin >> n;

    ll x = 1;
    rep(i, 100){
        ll y = x;
        rep(j, 100){
            if(y == n){
                cout << "Yes" << endl;
                return 0;
            }
            y *= 3;
        }
        x *= 2;
    }

    cout << "No" << endl;
}