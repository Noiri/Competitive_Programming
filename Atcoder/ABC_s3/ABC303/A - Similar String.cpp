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
    string s, t;
    cin >> s >> t;
    bool ok = true;
    rep(i, n){
        if(s[i] == t[i]) continue;
        else if((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1')) continue;
        else if((s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0')) continue;
        else ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}