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
    ll b;
    cin >> b;
    for(ll i = 1; i < 20; i++){
        ll ans = 1;
        for(ll j = 1; j < 20; j++){
            ans *= i;
            if(ans == b && i == j){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}