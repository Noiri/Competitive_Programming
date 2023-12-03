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
    vector<int> d(n);
    rep(i, n) cin >> d[i];

    int ans = 0;
    rep(i, n) {
        int m = i + 1;
        if(m < 10){
            ans += (m <= d[i]);
            ans += (m * 10 + m <= d[i]);
        }
        if(m / 10 == m % 10 && m >= 10){
            ans += (m % 10 <= d[i]);
            ans += (m <= d[i]);
        }
    }
    cout << endl;

    cout << ans << endl;
}