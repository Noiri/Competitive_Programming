#include <bits/stdc++.h>
using namespace std;

char maze[51][51];

int main(){
    int h, w;
    cin >> h >> w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++) cin >> maze[i][j];
    }

    bool ans = true;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(maze[i][j] == '#'){
                bool flag = false;
                for(int k=0; k<4; k++){
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if(0 <= nx && nx < w && 0 <= ny && ny < h && maze[ny][nx] == '#') flag = true;
                }
                if(flag == false) ans = false;
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}