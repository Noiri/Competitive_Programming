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
    int k, g, m;
    cin >> k >> g >> m;

    int x = 0, y = 0;
    rep(i, k){
        if(x == g) x = 0;
        else if(y == 0) y = m;
        else {
            if(x + y > g){
                y = y - (g - x);
                x = g;
            }
            else {
                x += y;
                y = 0;
            }
        }
    }

    cout << x << " " << y << endl;
}