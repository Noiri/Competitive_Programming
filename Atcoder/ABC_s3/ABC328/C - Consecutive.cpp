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
    string s;
    cin >> n >> q >> s;

    vector<int> v(n);
    rep(i, n-1){
        if(s[i] == s[i+1]) v[i+1] += 1;
        v[i+1] += v[i];
    }
    rep(i, q){
        int l, r;
        cin >> l >> r;
        int ans = v[r-1] - v[l-1];
        cout << ans << endl;
    }
}