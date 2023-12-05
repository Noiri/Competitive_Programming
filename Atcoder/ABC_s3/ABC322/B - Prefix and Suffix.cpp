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
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    bool pre = true;
    bool suf = true;
    rep(i, n){
        if(s[i] != t[i]) pre = false;
        if(s[n-i-1] != t[m-i-1]) suf = false;
    }

    int ans = 3;
    if(pre && suf) ans = 0;
    else if(pre && !suf) ans = 1;
    else if(!pre && suf) ans = 2;

    cout << ans << endl;
}