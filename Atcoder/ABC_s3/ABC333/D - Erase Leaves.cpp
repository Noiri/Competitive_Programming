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

    //コンストラクタ
    UnionFind(int n) : par(n, -1){}

    void init(int n) {par.assign(n, -1);}

    //親を再帰的に辿ることによって根を調べる
    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    //根が同じならば同じ集合に属する
    bool same(int x, int y){
        if(root(x) == root(y)) return true;
        else return false;
    }

    //
    bool merge(int x, int y){
        x = root(x);
        y = root(y);

        //既に同じ集合に属している際の処理
        if(x == y) return false;

        //マージする際にxの方を根とする様な実装
        if(par[x] < par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x){
        //xが含まれる集合に含まれる要素数を返す
        return -par[root(x)];
    }
};

int main(){
    int n;
    cin >> n;
    UnionFind uf(n);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        if(a == 1 || b == 1) continue;
        uf.merge(a-1, b-1);
    }

    map<int, int> mp;
    rep(i, n) mp[uf.root(i)] = uf.size(i);
    vector<int> sz;
    for(auto p: mp) sz.push_back(p.second);
    sort(all(sz));

    int ans = 0;
    rep(i, sz.size()-1) ans += sz[i];

    cout << ans << endl;
}