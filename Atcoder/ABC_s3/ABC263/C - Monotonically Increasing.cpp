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
    
    vector<vector<int>> ans;
    for(int bit = 0; bit < (1 << m); bit++){
        vector<int> tmp;
        rep(i, m){
            if(bit & (1 << i)) tmp.push_back(i+1);
        }
        if(tmp.size() == n) ans.push_back(tmp);
    }

    sort(all(ans));

    rep(i, ans.size()){
        rep(j, n) cout << ans[i][j] << " ";
        cout << endl;
    }
}