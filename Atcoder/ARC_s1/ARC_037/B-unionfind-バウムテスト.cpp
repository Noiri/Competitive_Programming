#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1) {}
    void init(int n) {par.assign(n, -1);}

    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool same(int x, int y){
        return (root(x) == root(y));
    }

    bool merge(int x, int y){
        x = root(x);
        y = root(y);
        if(x == y) return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x){
        return -par[root(x)];
    }
};

int Loop_Node[10000];

int main(){
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    for(int i=0; i<M; i++){
        int u, v;
        cin >> u >> v;
        //閉路を記録
        if(uf.root(u) == uf.root(v)) Loop_Node[u] = -1;
        
        uf.merge(u, v);
    }

    set<int> Invalid, root;
    for(int i=1; i<=N; i++){
        if(Loop_Node[i] == -1) Invalid.insert(uf.root(i));
        root.insert(uf.root(i));
    }

    int ans = root.size() - Invalid.size();
    cout << ans << endl;
    return 0;
}