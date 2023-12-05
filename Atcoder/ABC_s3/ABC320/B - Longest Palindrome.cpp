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

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            bool flag = true;
            rep(k, j - i){
                if(s[i+k] != s[j-k]) flag = false;
            }
            if(flag) chmax(ans, j-i+1);
        }
    }

    cout << ans << endl;
}