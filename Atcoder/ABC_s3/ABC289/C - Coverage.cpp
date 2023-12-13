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
    vector<vector<int>> v(m);
    rep(i, m){
        int c;
        cin >> c;
        rep(j, c){
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1 << m); bit++){
        vector<bool> check(n);
        rep(i, m){
            if(bit & (1 << i)){
                for(auto x: v[i]) check[x-1] = true;
            }
        }
        bool ok = true;
        rep(i, n){
            if(!check[i]) ok = false;
        }
        if(ok) ans++;
    }

    cout << ans << endl;
}