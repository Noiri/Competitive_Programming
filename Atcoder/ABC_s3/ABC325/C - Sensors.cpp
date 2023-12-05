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
int m[1001][1001];
int c[1001][1001];

bool isIn(int nx, int ny){
    return (0 <= nx && nx < w && 0 <= ny && ny < h);
}

void solve(int label, int sy, int sx){
    c[sy][sx] = label;
    queue<pair<int, int>> que;
    que.push({sy, sx});
    while(!que.empty()){
        pair<int, int> p = que.front();
        que.pop();
        int y = p.first, x = p.second;
        for(int dy = -1; dy <= 1; dy++){
            for(int dx = -1; dx <= 1; dx++){
                int nx = x + dx;
                int ny = y + dy;
                if(isIn(nx, ny) && m[ny][nx] == '#' && c[ny][nx] == 0){
                    que.push({ny, nx});
                    c[ny][nx] = label;
                }
            }
        }
    }
}

int main(){
    cin >> h >> w;
    vector<string> tmp(h);
    rep(i, h) cin >> tmp[i];
    rep(i, h){
        rep(j, w) m[i][j] = tmp[i][j];
    }

    int l = 1;
    rep(i, h){
        rep(j, w){
            if(m[i][j] == '#' && c[i][j] == 0){
                solve(l, i, j);
                l++;
            }
        }
    }

    cout << l-1 << endl;

    // rep(i, h){
    //     rep(j, w) cout << c[i][j] << ", ";
    //     cout << endl;
    // }
}