#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind(int n) : par(n, -1){}
    void init(int n) {par.assign(n, -1);}

    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool same(int x, int y){
        return root(x) == root(y);
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

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x(m), y(m), z(m);
    for(int i=0; i<m; i++) {
        cin >> x[i] >> y[i] >> z[i];
        x[i]--; y[i]--;
    }

    UnionFind uf(n);
    for(int i=0; i<m; i++) uf.merge(x[i], y[i]);

    set<int> st;
    for(int i=0; i<n; i++) st.insert(uf.root(i));
    cout << st.size() << endl;

    return 0;
}