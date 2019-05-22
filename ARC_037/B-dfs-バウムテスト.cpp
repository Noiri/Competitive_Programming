#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
Graph G;
int N, M;

bool visit[111];
bool flag;
void dfs(int v, int p){
    if(visit[v]){
        flag = false;
        return;
    }
    visit[v] = true;
    for(auto u: G[v]){
        if(u == p) continue;
        dfs(u, v);
    }
}

int main(){
    cin >> N >> M;
    G.assign(N+1, vector<int>());
    for(int i=0; i<M; i++){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    
    int ans = 0;
    for(int i=1; i<=N; i++){
        flag = true;
        dfs(i, -1);
        ans += flag;
    }
    cout << ans << endl;
    
    return 0;
}
