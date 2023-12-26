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
    vector<string> m(h);
    rep(i, h) cin >> m[i];
    vector<vector<bool>> isVis(h, vector<bool>(w));

    int y = 0, x = 0;
    while(1){
        isVis[y][x] = true;
        int ny = y, nx = x;
        if(m[y][x] == 'U') ny--;
        if(m[y][x] == 'D') ny++;
        if(m[y][x] == 'L') nx--;
        if(m[y][x] == 'R') nx++;
        
        if(!isIn(ny, nx)){
            cout << y+1 << " " << x+1 << endl;
            return 0;
        }
        if(isVis[ny][nx]){
            cout << -1 << endl;
            return 0;
        }

        y = ny;
        x = nx;
    }
}