#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int lim = 3010;

string maze[lim];
ll O[lim][lim];
ll I[lim][lim];

int main(){
    int h, w;
    cin >> h >> w;
    for(int i=0; i<h; i++) cin >> maze[i];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++) O[i][j+1] += O[i][j] + (maze[i][j] == 'O');
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++) I[i][j+1] += I[i][j] + (maze[j][i] == 'I');
    }

    ll ans = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(maze[i][j] == 'J'){
                ll a = O[i][w] - O[i][j];
                ll b = I[j][h] - I[j][i];
                ans += a * b;
            }
        }
    }

    cout << ans << endl;
}