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

    vector<map<int, int>> v(n);
    rep(i, n){
        int c;
        cin >> c;
        rep(j, c){
            int a;
            cin >> a;
            v[i][a]++;
        }
    }
    
    int x;
    cin >> x;

    int cnt = 1e9;
    rep(i, n){
        int sz = v[i].size();
        if(v[i][x] != 0) chmin(cnt, sz);
    }

    vector<int> ans;
    rep(i, n){
        if(cnt == v[i].size() && v[i][x] != 0) ans.push_back(i+1);
    }
    sort(all(ans));

    cout << ans.size() << endl;
    for(auto v: ans) cout << v << " ";
    cout << endl;
}