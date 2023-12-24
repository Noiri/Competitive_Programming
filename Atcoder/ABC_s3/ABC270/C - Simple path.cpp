#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

vector<vector<int>> G;
int n, x, y;
vector<int> ans;

bool dfs(int p, int v){
    if(v == x) return true;
    for(auto nv: G[v]){
        if(nv == p) continue;
        if(dfs(v, nv)){
            ans.push_back(nv);
            return true;
        }
    }
    return false;
}

int main(){
    cin >> n >> x >> y;
    G.resize(n+1);
    rep(i, n-1){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    dfs(-1, y);
    for(auto v: ans) cout << v << " ";
    cout << y << endl;
}