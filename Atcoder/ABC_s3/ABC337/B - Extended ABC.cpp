#include <assert.h>
#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main(){
    string s;
    cin >> s;

    string t = "";
    int pos = 0;
    for(;pos < s.size(); pos++){
        if(s[pos] != 'A') break;
        t += (""s + s[pos]);
    }
    for(;pos < s.size(); pos++){
        if(s[pos] != 'B') break;
        t += (""s + s[pos]);
    }
    for(;pos < s.size(); pos++){
        if(s[pos] != 'C') break;
        t += (""s + s[pos]);
    }

    if(s == t) cout << "Yes" << endl;
    else cout << "No" << endl;
}