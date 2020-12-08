#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};



int main(){
    ll n, m;
    cin >> n >> m;
    vector<int> A(m), B(m);
    for(int i=0; i<m; i++){
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;
    }

    vector<ll> ans;
    UnionFind uf(n);
    ll res = n * (n-1) / 2;

    for(int i=0; i<m; i++){
        ans.push_back(res);
        int x = A[m-i-1];
        int y = B[m-i-1];
        if(uf.issame(x, y)) continue;

        ll sx = uf.size(x), sy = uf.size(y);
        res -= (sx * sy);
        uf.merge(x, y);
    }
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;

    return 0;
}