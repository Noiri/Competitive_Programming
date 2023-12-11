#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int m[101][101];

int main(){
    int n;
    cin >> n;

    rep(i, n){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int x = a; x < b; x++){
            for(int y = c; y < d; y++){
                m[x][y] = 1;
            }
        }
    }

    int ans = 0;
    rep(i, 101)rep(j, 101) ans += m[i][j];

    cout << ans << endl;
}