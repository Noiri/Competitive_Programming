#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

using ll = long long;

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1){}
    void init(int n) {par.assign(n, -1);}

    //再帰的に辿ることで親を調べる
    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    //親が同じならば同じ集合に属する
    bool same(int x, int y){
        return root(x) == root(y);
    }

    bool merge(int x, int y){
        x = root(x);
        y = root(y);
        if(x == y) return false;
        //新しい要素を加えた時に、rootに対して辺を張る(merge technique)
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    //新しいノードを集合に加えた時に、-1をrootに加算するため、
    //rootには、集合に属するノードの数に負符号を付加したものが保存されている。
    int size(int x){
        return -par[root(x)];
    }
};


int main(){
    int h, w;
    cin >> h >> w;
    using P = pair<int ,int>;
    vector<vector<int>> colored(h+2, vector<int>(w+2));
    map<P, int> index;
    int idx = 1;
    rep(i, h){
        rep(j, w){
            index[{i+1, j+1}] = idx;
            idx++;
        }
    }

    int q;
    cin >> q;

    UnionFind uf(h * w + 1);
    int dy[] = {1, -1, 0, 0};
    int dx[] = {0, 0, 1, -1};
    rep(i, q){
        int query_type;
        cin >> query_type;
        if(query_type == 1){
            int y, x;
            cin >> y >> x;
            colored[y][x] = true;
            rep(d, 4){
                int ny = y + dy[d];
                int nx = x + dx[d];
                if(colored[ny][nx]) uf.merge(index[{y, x}], index[{ny, nx}]);
            }
        }
        else if(query_type == 2){
            int ya, xa, yb, xb;
            cin >> ya >> xa >> yb >> xb;
            if(colored[ya][xa] && colored[yb][xb] && uf.same(index[{ya, xa}] , index[{yb, xb}])) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}