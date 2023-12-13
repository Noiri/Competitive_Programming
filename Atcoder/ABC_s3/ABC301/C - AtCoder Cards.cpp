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
    string s, t;
    cin >> s >> t;

    vector<int> diff(26);
    int ws = 0, wt = 0;
    rep(i, s.size()){
        if(s[i] == '@') ws++;
        else diff[s[i] - 'a']++;
    }
    rep(i, t.size()){
        if(t[i] == '@') wt++;
        else diff[t[i] - 'a']--;
    }

    bool ng = false;
    rep(i, 26){
        char c = 'a' + i;
        if(c != 'a' && c != 't' && c != 'c' && c != 'o' && c != 'd' && c != 'e' && c != 'r' && diff[i] != 0) ng = true;
    }
    if(ng){
        cout << "No" << endl;
        return 0;
    }

    rep(i, 26){
        if(diff[i] > 0){
            wt -= diff[i];
        }
        else if(diff[i] < 0){
            ws -= abs(diff[i]);
        }
    }

    if(ws >= 0 && wt >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}