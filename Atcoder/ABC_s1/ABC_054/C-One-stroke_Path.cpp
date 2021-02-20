#include <bits/stdc++.h>
using namespace std;
#define MAX 8
int n, m;
bool graph[MAX][MAX];
bool visited[MAX];

int dfs(int v ){
    bool all_visited = true;
    for(int i=0; i<n; i++) if(visited[i] == false) all_visited = false;
    if(all_visited) return 1;

    int ret = 0;
    for(int i=0; i<n; i++){
        if(graph[v][i] == false) continue;
        if(visited[i]) continue;
        

        visited[i] = true;
        ret += dfs(i);
        visited[i] = false;
    }

    return ret;
}

int main(){
    cin >> n >> m;

    for(int i=0; i<m; i++) {
        int from, to;
        cin >> from >> to;
        from--; to--;
        graph[from][to] = true;
        graph[to][from] = true;
    }

    for(int i=0; i<n; i++) visited[i] = false;
    visited[0] = true;
    cout << dfs(0) << endl;
    return 0;
}