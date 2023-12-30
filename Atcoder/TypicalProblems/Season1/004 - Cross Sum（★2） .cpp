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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h)rep(j, w) cin >> a[i][j];

    vector<int> row(h), col(w);
    rep(i, h) rep(j, w) row[i] += a[i][j];
    rep(j, w) rep(i, h) col[j] += a[i][j];

    rep(i, h){
        rep(j, w) cout << row[i] + col[j] - a[i][j] << " ";
        cout << endl;
    }
}