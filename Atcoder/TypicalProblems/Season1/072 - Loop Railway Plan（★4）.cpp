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
char m[17][17];

int ans = 0;
int sy, sx;

void rec(vector<vector<int>> flag, int y, int x, int d){
    int dy[] = {0, 0, 1, -1};
    int dx[] = {1, -1, 0, 0};

    rep(i, 4){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(0 <= nx && nx < w && 0 <= ny && ny < h && m[ny][nx] == '.'){
            if(ny == sy && nx == sx){
                chmax(ans, d+1);
                return;
            }
            else if(!flag[ny][nx]){
                auto new_flag = flag;
                new_flag[ny][nx] = 1;
                rec(new_flag, ny, nx, d+1);
            }
        }
    }
    return;
}

int main(){
    cin >> h >> w;
    rep(i, h)rep(j, w) cin >> m[i][j];

    vector<vector<int>> flag(h, vector<int>(w));
    for(sy = 0; sy < h; sy++){
        for(sx = 0; sx < w; sx++){
            rec(flag, sy, sx, 0);
        }
    }
    
    if(ans < 4) ans = -1;
    cout << ans << endl;
}