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
vector<string> m;
bool vis[501][501];

bool isIn(int y, int x){
    return (0 <= y && y < h && 0 <= x && x < w);
}

void bfs(){
    queue<pair<int, int>> que;
    que.push({0, 0});
    int dy[4] = {0, 0, 1, -1};
    int dx[4] = {1, -1, 0, 0};
    while(!que.empty()){
        auto [y, x] = que.front();
        que.pop();
        rep(i, 4){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(isIn(ny, nx) && !vis[ny][nx]){
                bool isOk = (m[y][x] == 's' && m[ny][nx] == 'n') || (m[y][x] == 'n' && m[ny][nx] == 'u') || (m[y][x] == 'u' && m[ny][nx] == 'k') || (m[y][x] == 'k' && m[ny][nx] == 'e') || (m[y][x] == 'e' && m[ny][nx] == 's');
                if(isOk){
                    vis[ny][nx] = true;
                    que.push({ny, nx});
                } 
            }
        }
    }
}

int main(){
    cin >> h >> w;
    m.resize(h);
    rep(i, h) cin >> m[i];
    if(m[0][0] != 's'){
        cout << "No" << endl;
        return 0;
    }
    vis[0][0] = true;
    bfs();
    if(vis[h-1][w-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
}