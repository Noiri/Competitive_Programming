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
    vector<int> w(n), x(n);
    rep(i, n) cin >> w[i] >> x[i];

    int ans = 0;
    for(int i = 0; i <= 24; i++){
        int tmp = 0;
        rep(j, n){
            int now = (x[j] + i) % 24;
            if(9 <= now && now + 1 <= 18) tmp += w[j];
        }
        chmax(ans, tmp);
    }

    cout << ans << endl;
}