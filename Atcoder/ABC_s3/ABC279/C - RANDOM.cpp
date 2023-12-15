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
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i, h) cin >> s[i];
    rep(i, h) cin >> t[i];

    map<string, int> mp;
    rep(i, w){
        string cs = "";
        string ct = "";
        rep(j, h){
            cs += (""s + s[j][i]);
            ct += (""s + t[j][i]);
        }
        mp[cs]++;
        mp[ct]--;
    }

    bool ans = true;
    for(auto p: mp){
        if(p.second != 0) ans = false;
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}