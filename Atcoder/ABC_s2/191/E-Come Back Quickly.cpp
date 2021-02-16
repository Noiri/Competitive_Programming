#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;
using ll = long long;

struct edge {
    int to;
    int cost;
};


vector<int> dijkstra(int start, vector<vector<edge>> G){
    const int INF = 1e9;
    vector<int> dist((int)G.size(), INF);
    dist[start] = 0;

    using P = pair<int, int>;
    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(dist[start], start));

    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(dist[v] < p.first) continue;

        for(auto e : G[v]){
            auto [to, cost] = e;
            if(chmin(dist[to], dist[v]+cost)) que.push(P(dist[to], to));
        }
    }

    return dist;
}


int main(){
    int n, m;
    cin >> n >> m;

    const int INF = 1e9;

    vector<int> selfLoop_d(n, INF);
    vector<vector<edge>> G(n), U(n);
    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;

        if(a == b) chmin(selfLoop_d[a], c);
        else{
            G[a].push_back(edge{b, c});
            U[b].push_back(edge{a, c});
        }
    }

    rep(start, n){
        auto dist_g = dijkstra(start, G);
        auto dist_u = dijkstra(start, U);

        int ans = INF;
        rep(i, n){
            if(i == start){
                if(selfLoop_d[i] == INF) continue;
                else chmin(ans, selfLoop_d[i]);
            }
            else chmin(ans, dist_g[i]+dist_u[i]);
        }

        if(ans == INF) cout << -1 << endl;
        else cout << ans << endl;
    }
}