#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

pair<int, int> parser(string s){
    int h, m;
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ':'){
            h = stoi(tmp);
            tmp = "";
            continue;
        }
        tmp += (""s + s[i]);
    }
    m = stoi(tmp);

    return {h, m};
}


int main(){
    int n; 
    cin >> n;

    int ans = 0;
    for(int i = 0; i < n; i++){
        string sp, wu;
        cin >> sp >> wu;

        auto [sp_h, sp_m] = parser(sp);
        auto [wu_h, wu_m] = parser(wu);

        if(sp_h < wu_h){
            ans += (wu_h - sp_h - 1)*60 + (60 - sp_m) + wu_m;
        }
        else if(sp_h == wu_h){
            if(sp_m <= wu_m) ans += (wu_m - sp_m);
            else ans += 23*60 + (60 - sp_m) + wu_m;
        }
        else{
            ans += (24 - sp_h - 1)*60 + (60 - sp_m) + wu_h*60 + wu_m;
        }
    }

    cout << ans << endl;
}