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
vector<bool> vis;

void dfs(int p, int d){
    vis[p] = true;
    for(auto v: G[p]){
        if(!vis[v.to] && v.cost <= d*d) dfs(v.to, d);
    }
}

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    G.resize(n);
    rep(i, n){
        rep(j, n){
            int dist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            G[i].push_back({j, dist});
            G[j].push_back({i, dist});
        }
    }

    vis.resize(n);
    dfs(0, d);

    rep(i, n){
        if(vis[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}