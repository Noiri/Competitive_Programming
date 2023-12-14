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
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    ll ans = 0;
    rep(j, s.size()/2){
        if(s[j] != s[n-j-1]) ans += b;
    }
    
    rep(i, n+1){
        ll sum = a * (i+1);
        s += (""s + s.front());
        s.erase(0, 1);
        rep(j, s.size()/2){
            if(s[j] != s[n-j-1]) sum += b;
        }
        chmin(ans, sum);
    }

    cout << ans << endl;
}