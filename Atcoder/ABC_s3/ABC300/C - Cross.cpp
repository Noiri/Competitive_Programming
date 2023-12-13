#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int h, w;

bool isIn(int y, int x){
    return (0 <= y && y < h && 0 <= x && x < w);
}

int main(){
    cin >> h >> w;

    vector<vector<char>> m(h, vector<char>(w));
    rep(i, h)rep(j, w) cin >> m[i][j];
    vector<int> ans(min(h, w)+1);
    rep(y, h){
        rep(x, w){
            int sz = 0, ny = y, nx = x;
            if(m[y][x] == '#' && isIn(y-1, x-1) && m[y-1][x-1] == '#' && isIn(y+1, x+1) && m[y+1][x+1] == '#' && isIn(y-1, x+1) && m[y-1][x+1] == '#' && isIn(y+1, x-1) && m[y+1][x-1] == '#'){
                while(isIn(ny, nx) && m[ny][nx] == '#'){
                    sz++;
                    ny++;
                    nx++;
                }
                ans[sz-1]++;
            }
        }
    }

    rep(i, min(h, w)) cout << ans[i+1] << " ";
    cout << endl;
}