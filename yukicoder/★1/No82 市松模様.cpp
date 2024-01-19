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
    int w, h;
    char start;
    cin >> w >> h >> start;

    if(start == 'B') start = 'W';
    else start = 'B';

    for(int i = 0; i < h; i++){
        if(start == 'B') start = 'W';
        else start = 'B';
        char color = start;
        for(int j = 0; j < w; j++){
            if(j == 0) cout << color;
            else{
                if(color == 'B') color = 'W';
                else color = 'B';
                cout << color;
            }
        }
        cout << endl;
    }
}