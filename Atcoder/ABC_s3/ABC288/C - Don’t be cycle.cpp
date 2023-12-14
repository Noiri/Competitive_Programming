#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int n, m;
vector<vector<int>> G;
vector<bool> vis;
int ans = 0;

void dfs(int v, int p){
    vis[v] = true;
    for(auto nv: G[v]){
        if(nv == p) continue;
        else if(!vis[nv]) dfs(nv, v);
        else ans++; 
    }
}

int main(){
    cin >> n >> m;
    G.resize(n);
    vis.resize(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    rep(i, n){
        if(!vis[i]) dfs(i, -1);
    }

    cout << ans/2 << endl;
}