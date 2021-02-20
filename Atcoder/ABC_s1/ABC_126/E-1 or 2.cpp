#include <bits/stdc++.h>
using namespace std;

//http://drken1215.hatenablog.com/entry/2019/05/19/224500_1
//https://www.slideshare.net/chokudai/union-find-49066733

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