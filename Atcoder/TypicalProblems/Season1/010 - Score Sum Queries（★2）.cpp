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
    cin >> n;
    vector<int> c(n), p(n);
    rep(i, n) cin >> c[i] >> p[i];

    vector<int> a(n+1), b(n+1);
    rep(i, n){
        a[i+1] += a[i];
        b[i+1] += b[i];
        if(c[i] == 1) a[i+1] += p[i];
        else b[i+1] += p[i];
    }

    int q;
    cin >> q;
    rep(i, q){
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l-1] << " " << b[r] - b[l-1] << endl;
    }
}