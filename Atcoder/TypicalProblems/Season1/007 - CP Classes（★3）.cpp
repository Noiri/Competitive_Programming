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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    int q;
    cin >> q;
    rep(i, q){
        int b;
        cin >> b;
        int pos = lower_bound(a.begin(), a.end(), b) - a.begin();
        int ans = abs(b - a[pos]);
        if(pos - 1 >= 0) chmin(ans, abs(b - a[pos - 1]));
        cout << ans << endl;
    }

}