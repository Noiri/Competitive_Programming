#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct edge{
    int to;
    ll cost;
};

bool visit[100005];
bool ans[100005];
vector<vector<edge>> G(100005);

void dfs(int v, ll w){
    if(w%2 == 0) ans[v] = true;
    visit[v] = true;
    for(int i=0; i<G[v].size(); i++){
        auto v_to = G[v][i];
        if(visit[v_to.to] == false){
            dfs(v_to.to, w + v_to.cost);
        }
    }
    return;
}



int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n-1; i++){
        int u, v;
        ll w;
        cin >> u >> v >> w;
        G[u].push_back(edge{v, w});
        G[v].push_back(edge{u, w});
    }

    
    dfs(1, 0);
    for(int i=1; i<=n; i++) cout << ans[i] << endl;
    
    return 0;
}