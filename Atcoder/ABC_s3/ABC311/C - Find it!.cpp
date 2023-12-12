#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

vector<int> G;
vector<int> ans;
int st = -1;
bool vis[int(2e5+1)];

bool dfs(int v){
    vis[v] = true;
    int nv = G[v-1];
    if(!vis[nv]){
        if(dfs(nv)){
            ans.push_back(v);
            return true;
        }
    } 
    else{
        st = nv;
        ans.push_back(v);
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    G.resize(n);
    rep(i, n) cin >> G[i];

    rep(i, n){
        ans.clear();
        if(!vis[i+1]){
            dfs(i+1);
            bool flag = false;
            if(st != -1){
                vector<int> output;
                reverse(all(ans));
                for(auto x: ans){
                    if(x == st) flag = true;
                    if(flag) output.push_back(x);
                }
                cout << output.size() << endl;
                for(auto x: output) cout << x << " ";
                cout << endl;
                return 0;
            }
        }
    }
}