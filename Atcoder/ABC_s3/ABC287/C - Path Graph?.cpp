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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    UnionFind uf(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
        uf.merge(a, b);
    }
    int dig1 = 0;
    int dig2 = 0;
    rep(i, n){
        if(G[i].size() == 1) dig1++;
        else if(G[i].size() == 2) dig2++;
    }
    if(m == n-1 && uf.size(0) == n && dig1 == 2 && dig1+dig2 == n) cout << "Yes" << endl;
    else cout << "No" << endl;
}