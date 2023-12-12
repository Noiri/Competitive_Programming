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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> m(h+2, vector<char>(w+2));
    rep(i, h+2)rep(j, w+2) m[i][j] = '.';
    rep(i, h)rep(j, w) cin >> m[i+1][j+1];

    rep(i, h){
        rep(j, w){
            int y = i+1, x = j+1;
            if(m[y][x] == '.'){
                // 角以外
                int cnt = 0;
                for(int k = -1; k <= 1; k++){
                    for(int l = -1; l <= 1; l++) cnt += (m[y+k][x+l] == '#');
                }
                if(cnt >= 5){
                    cout << y << " " << x << endl;
                    return 0;
                }
                // 角
                bool flag = false;
                flag |= (m[y-1][x-1] == '#' && m[y-1][x] == '#' && m[y][x-1] == '#');
                flag |= (m[y-1][x+1] == '#' && m[y-1][x] == '#' && m[y][x+1] == '#');
                flag |= (m[y+1][x-1] == '#' && m[y+1][x] == '#' && m[y][x-1] == '#');
                flag |= (m[y+1][x+1] == '#' && m[y+1][x] == '#' && m[y][x+1] == '#');
                if(flag){
                    cout << y << " " << x << endl;
                    return 0;
                }
            }
        }
    }
}