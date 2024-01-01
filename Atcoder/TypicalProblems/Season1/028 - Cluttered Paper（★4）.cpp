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
    vector<vector<int>> m(1002, vector<int>(1002));
    rep(i, n){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        m[y1][x1]++;
        m[y1][x2]--;
        m[y2][x1]--;
        m[y2][x2]++;
    }

    rep(i, 1001){
        rep(j, 1001) m[i][j+1] += m[i][j];
    }
    rep(i, 1001){
        rep(j, 1001) m[j+1][i] += m[j][i];
    }

    vector<int> ans(n+1);
    rep(i, 1002){
        rep(j, 1002) ans[m[i][j]]++;
    }

    for(int i = 1; i <= n; i++) cout << ans[i] << endl;
}