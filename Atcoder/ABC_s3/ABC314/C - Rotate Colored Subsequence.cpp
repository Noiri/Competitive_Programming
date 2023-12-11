#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    rep(i, n) cin >> c[i];

    vector<vector<char>> part(m+1);
    vector<vector<int>> point(m+1);
    rep(i, n) {
        part[c[i]].push_back(s[i]);
        point[c[i]].push_back(i);
    }

    vector<char> ans(n);
    rep(i, m+1){
        if(part[i].size() == 0) continue;
        ans[point[i][0]] = part[i][part[i].size()-1];
        for(int j = 0; j < part[i].size()-1; j++) ans[point[i][j+1]] = part[i][j]; 
    }

    for(auto x : ans) cout << x;
    cout << endl;
}