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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    rep(i, n){
        int a, b;
        cin >> a >> b;
        v.push_back(a-b);
        v.push_back(b);
    }
    sort(rall(v));

    ll ans = 0;
    rep(i, k){
        ans += v[i];
    }

    cout << ans << endl;
}