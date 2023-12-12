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
    vector<vector<int>> v(n+1);
    rep(i, 3*n){
        int tmp;
        cin >> tmp;
        v[tmp].push_back(i);
    }
    rep(i, n+1) sort(all(v[i]));

    vector<pair<int, int>> ans;
    for(int i = 1; i <= n; i++) ans.push_back({v[i][1], i});
    sort(all(ans));

    rep(i, n) cout << ans[i].second << " ";
    cout << endl;
}