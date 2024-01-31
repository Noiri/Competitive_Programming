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
    int n, q;
    cin >> n >> q;
    vector<ll> r(n);
    rep(i, n) cin >> r[i];
    sort(all(r));
    rep(i, n-1) r[i+1] += r[i];

    rep(i, q){
        ll x;
        cin >> x;
        int pos = lower_bound(r.begin(), r.end(), x) - r.begin();
        if(r[pos] == x){
            cout << pos+1 << endl;
        }
        else cout << pos << endl;
    }
    
}