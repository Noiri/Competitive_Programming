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

ll dp[100001];

void dfs(int v, int p){
    dp[v] = 1;
    for(auto nv: G[v]){
        if(nv == p) continue;
        dfs(nv, v);
        dp[v] += dp[nv];
    }
}

int main(){
    int n;
    cin >> n;
    G.resize(n);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    dfs(0, -1);
    ll ans = 0;
    rep(i, n) ans += dp[i] * (n - dp[i]);
    cout << ans << endl;


}