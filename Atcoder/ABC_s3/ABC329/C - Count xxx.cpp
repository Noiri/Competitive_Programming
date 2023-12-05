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
    string s;
    cin >> n >> s;

    map<char, int> m;
    int l = 0;
    char c = s[0];
    for(int r = 0; r < n; r++){
        if(c != s[r]){
            m[c] = max(m[c], r - l);
            l = r;
            c = s[r];
        }
    }
    m[c] = max(m[s[s.size()-1]], n - l);

    int ans = 0;
    for(auto x : m) ans += x.second;
    cout << ans << endl;
}