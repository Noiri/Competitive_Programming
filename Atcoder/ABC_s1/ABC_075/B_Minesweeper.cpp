#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> m(h);
    for(int i=0; i<h; i++) cin >> m[i];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(m[i][j] == '.'){
                int cnt = 0;
                for(int x=-1; x<=1; x++){
                    for(int y=-1; y<=1; y++){
                        if(0<=y+i && y+i<h && 0<=x+j && x+j<w && m[i+y][j+x] == '#') cnt++;
                    }
                }
                cout << cnt;
            }
            else{
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}