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
int m[11][11];
int ans = 0;

bool isIn(int y, int x){
    return (0 <= y && y < h && 0 <= x && x < w);
}

void dfs(int y, int x, set<int> route){
    route.insert(m[y][x]);
    if(y == h-1 && x == w-1 && route.size() == h+w-1){
        ans++;
        return;
    } 
    int dy[] = {1, 0};
    int dx[] = {0, 1};
    rep(i, 2){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(isIn(ny, nx)){
            dfs(ny, nx, route);
        }
    }
}

int main(){
    cin >> h >> w;
    rep(i, h) rep(j, w) cin >> m[i][j];
    set<int> st;
    dfs(0, 0, st);
    cout << ans << endl;
}