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
    string s;
    cin >> s;
    rep(i, s.size()-2){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            s.erase(i, 3);
            i -= 2;
        }
    }

    cout << s << endl;
}