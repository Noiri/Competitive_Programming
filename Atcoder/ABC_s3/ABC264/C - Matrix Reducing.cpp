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
    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    rep(i, h1)rep(j, w1) cin >> a[i][j];

    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    rep(i, h2)rep(j, w2) cin >> b[i][j];

    for(int row = 0; row < (1 << h1); row++){
        for(int col = 0; col < (1 << w1); col++){
            vector<vector<int>> c;
            rep(i, h1){
                if(row & (1 << i)) continue;
                vector<int> tmp;
                rep(j, w1){
                    if(col & (1 << j)) continue;
                    tmp.push_back(a[i][j]);
                }
                c.push_back(tmp);
            }
            if(c.size() != h2 || c[0].size() != w2) continue;
            bool flag = true;
            rep(i, c.size()){
                rep(j, c[0].size()){
                    if(c[i][j] != b[i][j]) flag = false;
                }
            }
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}