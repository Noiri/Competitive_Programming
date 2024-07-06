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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> diff(n-1);
    rep(i, n-1) diff[i] = a[i] - a[i+1];

    ll sum = 0;
    rep(i, n-1) sum += abs(diff[i]);

    rep(i, q){
        int l, r, v;
        cin >> l >> r >> v;

        if(l-2 >= 0){
            sum -= abs(diff[l-2]);
            sum += abs(diff[l-2] - v);
            diff[l-2] -= v;
        }
        if(r-1 < n-1){
            sum -= abs(diff[r-1]);
            sum += abs(diff[r-1] + v);
            diff[r-1] += v;
        }

        cout << sum << endl;
    }
}