#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &v, int from, bool visit[], int x, int y){
    visit[from] = true;
    if(v[from].size() != 0){
        for(int i=0; i<v[from].size(); i++){
            int to = v[from][i];
            if(visit[to] == false && (from != x || to != y) && (from != y || to != x)) dfs(v, to, visit, x, y);
        }
    }
    return;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> E(n);
    vector<pair<int, int>> edges;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        E[a].push_back(b);
        E[b].push_back(a);
        edges.push_back(make_pair(a, b));
    }

    int cnt = 0;
    for(int i=0; i<edges.size(); i++){
        bool visit[51];
        for(int j=0; j<n; j++) visit[j] = false;
        int x = edges[i].first, y = edges[i].second;
        dfs(E, 0, visit, x, y);
        bool flag = true;
        for(int j=0; j<n; j++) if(visit[j] == false) flag = false;
        if(flag == false) cnt++;
    }
    cout << cnt << endl;
}