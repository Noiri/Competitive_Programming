#include <bits/stdc++.h>
using namespace std;

char maze[51][51];

int main(){
    int h, w;
    cin >> h >> w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++) cin >> maze[i][j];
    }

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(maze[i][j] == '#'){
                bool flag = true;
                for(int k=0; k<4; k++){
                    int nx = j+dx[k], ny = i+dy[k];
                    if(nx >= 0 && nx < w && ny >= 0 && ny < h && maze[ny][nx] == '#') flag = false;
                }
                if(flag){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}