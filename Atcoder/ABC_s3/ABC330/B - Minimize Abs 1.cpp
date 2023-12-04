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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n){
        if(l <= a[i] && a[i] <= r){
            cout << a[i] << " ";
            continue;
        }

        if(abs(l - a[i]) < abs(r - a[i])) cout << l << " ";
        else cout << r << " ";
    }
    cout << endl;
}