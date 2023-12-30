#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;
using P = pair<int, int>;

struct edge{
    int to;
    int cost;
};

vector<vector<edge>> G;

void dijkstra(int start, vector<int>& dist){
    rep(i, dist.size()) dist[i] = 1e9;
    dist[start] = 0;
    priority_queue<P, vector<P>, greater<P>> que;
    que.push({0, start});
    while(!que.empty()){
        auto [d, v] = que.top();
        que.pop();
        for(auto nv: G[v]){
            if(dist[nv.to] > dist[v]+nv.cost){
                que.push({dist[v] + nv.cost, nv.to});
                dist[nv.to] = dist[v] + nv.cost;
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    G.resize(n);
    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }

    vector<int> dist1(n), distN(n);
    dijkstra(0, dist1);
    dijkstra(n-1, distN);
    
    rep(i, n) cout << dist1[i] + distN[i] << endl;
}