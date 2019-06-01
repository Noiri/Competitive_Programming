#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using Edge = struct{int to;};
using Graph = vector<vector<Edge>>;
vector<int> c, res;
int n;
int ind = 0;

Graph G;
void dfs(int v, int p, int a){
    res[v] = c[a];
    for(auto e: G[v]){
        if(e.to == p) continue;
        ind++;
        dfs(e.to, v, ind);
    }
}



int main(){
    cin >> n;
    G.assign(n, vector<Edge>());
    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        G[u].push_back(Edge{v});
        G[v].push_back(Edge{u});
    }
    for(int i=0; i<n; i++){
        int C; cin >> C;
        c.push_back(C);
    }

    sort(c.rbegin(), c.rend());

    res.assign(n, 0);
    dfs(0, -1, 0);

    int ans = 0;
    for(int i=1; i<n; i++) ans += c[i];
    cout << ans << endl;
    for(int i=0; i<n; i++){
        if(i == n-1) cout << res[i] << endl;
        else cout << res[i] << " ";
    }
}