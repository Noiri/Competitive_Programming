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

    bool ans = false;
    int y = 0, x = 0;
    set<pair<int, int>> st;
    st.insert({y, x});
    rep(i, n){
        if(s[i] == 'R') x++;
        else if(s[i] == 'L') x--;
        else if(s[i] == 'U') y++;
        else if(s[i] == 'D') y--;
        if(st.find({y, x}) != st.end()) ans = true;
        st.insert({y, x});
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}