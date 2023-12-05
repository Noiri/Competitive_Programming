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
    vector<string> v(n);
    rep(i, n) cin >> v[i];

    vector<pair<int, int>> ans(n);
    rep(i, n) ans[i].second = - (i + 1);

    rep(i, n){
        rep(j, n){
            if(v[i][j] == 'o') ans[i].first++;
            else if(v[i][j] == 'x') ans[j].first++;
        }
    }

    sort(all(ans));
    for(int i = n-1; i >= 0; i--) cout << - ans[i].second << " ";
    cout << endl;
}