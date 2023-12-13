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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = -1;
    int len = 0;
    rep(i, n-1){
        if(s[i] == 'o' && s[i+1] == 'o') len++;
        else if(s[i] == 'o' && s[i+1] == '-'){
            chmax(ans, len+1);
            len = 0;
        }
        else len = 0;
    }

    reverse(all(s));
    len = 0;
    rep(i, n-1){
        if(s[i] == 'o' && s[i+1] == 'o') len++;
        else if(s[i] == 'o' && s[i+1] == '-'){
            chmax(ans, len+1);
            len = 0;
        }
        else len = 0;
    }

    cout << ans << endl;
}