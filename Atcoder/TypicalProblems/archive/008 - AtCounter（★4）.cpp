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
    const ll mod = 1e9 + 7;
    int n;
    string s;
    cin >> n >> s;

    reverse(all(s));
    vector<vector<ll>> v(n+1, vector<ll>(26));
    rep(i, n){
        if(s[i] == 'r') v[i]['r' - 'a']++;
        if(s[i] == 'e') v[i]['e' - 'a'] += v[i]['r' - 'a'];
        if(s[i] == 'd') v[i]['d' - 'a'] += v[i]['e' - 'a'];
        if(s[i] == 'o') v[i]['o' - 'a'] += v[i]['d' - 'a'];
        if(s[i] == 'c') v[i]['c' - 'a'] += v[i]['o' - 'a'];
        if(s[i] == 't') v[i]['t' - 'a'] += v[i]['c' - 'a'];
        if(s[i] == 'a') v[i]['a' - 'a'] += v[i]['t' - 'a'];
        rep(j, 26){
            v[i+1][j] += (v[i][j] % mod);
            v[i+1][j] %= mod;
        }
    }

    cout << v[n][0] << endl;
}