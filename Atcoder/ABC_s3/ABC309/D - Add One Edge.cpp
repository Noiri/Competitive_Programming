#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int n1, n2, m;
vector<vector<int>> G;
vector<int> dist;

void bfs(int st){
    queue<int> que;
    que.push(st);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv: G[v]){
            if(dist[nv] > dist[v]+1){
                que.push(nv);
                dist[nv] = dist[v] + 1;
            }
        }
    }
}

int main(){
    cin >> n1 >> n2 >> m;
    G.resize(n1+n2+1);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dist.resize(n1+n2+1);
    rep(i, n1+n2+1) dist[i] = 1e9;
    dist[1] = 0, dist[n1+n2] = 0;

    bfs(1);
    int m1 = 0;
    for(int i = 1; i <= n1; i++) chmax(m1, dist[i]);

    bfs(n1+n2);
    int m2 = 0;
    for(int i = n1+1; i <= n1+n2; i++) chmax(m2, dist[i]);

    int ans = m1 + m2 + 1;
    cout << ans << endl;
}