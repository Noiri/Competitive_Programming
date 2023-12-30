#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

struct StronglyConnectedComponents {

    //受け取るグラフ, 順方向に辺を張ったグラフ, 逆方向に辺を張ったグラフ
    vector<vector<int>> g, ng, rg;

    //頂点の色, 帰りがけ順, 訪問済みかどうか
    vector<int> nd_color, tp_order, visited;

    //コンストラクタ
    StronglyConnectedComponents(vector<vector<int>>& g) : g(g), ng(g.size()), rg(g.size()), nd_color(g.size(), -1), visited(g.size()) {
        for (int v = 0; v < g.size(); v++) {
            //ng, rg を構築
            for (auto nv : g[v]) {
                ng[v].push_back(nv);//順方向
                rg[nv].push_back(v);//逆方向に辺を張りなおす
            }
        }
    }

    //頂点vから開始して帰りがけに頂点を追加していく
    void dfs(int v) {
        if (visited[v]) return;
        visited[v] = true;
        for (auto nv : ng[v]) dfs(nv);
        tp_order.push_back(v);
    }


    //逆方向のグラフに対してdfsして、強連結成分をcolorで塗ります
    void rdfs(int v, int color) {
        if (nd_color[v] != -1) return; //既に彩色されてたら取りやめる

        nd_color[v] = color;
        for (auto nv : rg[v]) rdfs(nv, color);
    }

    //強連結成分ごとに彩色します
    void color_graph() {

        //順方向のグラフにdfs(トポロジカルソートの要領で全点から)
        for (int i = 0; i < ng.size(); i++) {
            dfs(i);
        }
        //得られた順序は逆順なのでreveseします
        reverse(tp_order.begin(), tp_order.end());

        //帰りがけ順にrdfsします
        int color = 0;
        for (auto ord : tp_order) {
            if (nd_color[ord] == -1) {
                rdfs(ord, color);
                color++;
            }
        }
    }

    //強連結成分を1つの頂点に見立てたグラフを構築します(多重辺が含まれるので注意です!)
    vector<vector<int>> build() {

        //グラフの彩色数を求めます。
        int color_n = 0;
        for (auto c : nd_color) {
            color_n = max(color_n, c);
        }

        vector<vector<int>> ret(color_n + 1); //彩色数が頂点数になっています


        //隣接する頂点v,uについて考えたとき、両者の色が異なれば異なる強連結成分です
        for (int v = 0; v < g.size(); v++) {
            int v_c = nd_color[v];
            for (auto nv : g[v]) {
                int u_c = nd_color[nv];
                if (v_c != u_c) ret[v_c].push_back(u_c); //vの色からuの色に対して辺を張ります
            }
        }

        return ret;
    }
};


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
    }

    StronglyConnectedComponents scc(G);
    scc.color_graph();

    auto color = scc.nd_color;
    map<int, ll> cnt;
    rep(i, color.size()) cnt[color[i]]++;

    ll ans = 0;
    for(auto p: cnt){
        ans += p.second * (p.second - 1) / 2;
    }

    cout << ans << endl;
}