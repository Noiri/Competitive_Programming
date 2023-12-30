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

pair<int, int> dfs(int v, int p, int d){
    pair<int, int> ret = {v, d}; //node, dist
    for(auto nv: G[v]){
        if(nv == p) continue;
        auto next = dfs(nv, v, d+1);
        if(chmax(ret.second, next.second)) ret.first = next.first;
    }
    return ret;
}


int main(){
    int n;
    cin >> n;
    G.resize(n+1);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    auto [u, tmp] = dfs(1, -1, 0);
    auto [v, diameter] = dfs(u, -1, 0);

    cout << diameter + 1 << endl;
}