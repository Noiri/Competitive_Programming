#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;


struct edge{
    int to;
    int cost;
};
vector<vector<edge>> G;

int ans = 0;
bool vis[11];
int dist[11];

void dfs(int v, int sum){
    vis[v] = true;
    chmax(ans, sum);
    for(auto nv: G[v]){
        if(!vis[nv.to]) dfs(nv.to, sum + nv.cost);
    }
    vis[v] = false;
}

int main(){
    int n, m;
    cin >> n >> m;

    G.resize(n+1);

    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }

    for(int st = 1; st <= n; st++) dfs(st, 0);

    cout << ans << endl;
}