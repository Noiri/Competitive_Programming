#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

vector<vector<int>> G;
vector<int> color;

void dfs(int v, int c){
    color[v] = c;
    for(auto nv: G[v]){
        if(color[nv] == -1) dfs(nv, 1 - c);
    }
}


int main(){
    int n;
    cin >> n;
    G.resize(n);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    color.resize(n, -1);
    dfs(0, 0);

    vector<int> black, white;
    rep(i, n){
        if(color[i] == 1) black.push_back(i+1);
        else white.push_back(i+1);
    }

    if(black.size() >= n/2) rep(i, n/2) cout << black[i] << " ";
    else rep(i, n/2) cout << white[i] << " ";
    cout << endl;
}