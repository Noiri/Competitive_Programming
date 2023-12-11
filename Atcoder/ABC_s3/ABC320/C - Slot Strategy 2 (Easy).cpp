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
    int m;
    cin >> m;

    string a, b, c;
    cin >> a >> b >> c;

    int ans = 1e9;

    // a, b, c
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && a[i] == b[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && a[i] == c[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    // b, a, c,
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && b[i] == a[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && b[i] == c[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    // c, a, b
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && c[i] == a[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && c[i] == b[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    // a, c, b
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && a[i] == c[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && a[i] == b[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    // b, c, a
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && b[i] == c[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && b[i] == a[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    // c, b, a
    rep(i, m){
        int t2 = 1e9;
        rep(j, 3*m){
            if(i != j && c[i] == b[j%m]) chmin(t2, j);
        }
        int t3 = 1e9;
        rep(j, 3*m){
            if(i != j && j != t2 && c[i] == a[j%m]) chmin(t3, j);
        }
        int t = max(i, t2);
        t = max(t, t3);
        chmin(ans, t);
    }

    if(ans == 1e9) ans = -1;
    cout << ans << endl;
}