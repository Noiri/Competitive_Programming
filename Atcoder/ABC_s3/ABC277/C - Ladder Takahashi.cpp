#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

map<int, vector<int>> G;
set<int> vis;
int ans = 1;

void dfs(int v){
    vis.insert(v);
    for(auto nv: G[v]){
        if(vis.find(nv) == vis.end()){
            chmax(ans, nv);
            dfs(nv);
        }
    }
}

int main(){
    int n;
    cin >> n;
    rep(i, n){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(1);
    cout << ans << endl;
}