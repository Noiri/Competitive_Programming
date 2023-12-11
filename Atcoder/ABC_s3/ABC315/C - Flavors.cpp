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
    vector<pair<int, int>> v(n);
    rep(i, n) cin >> v[i].second >> v[i].first;
    sort(rall(v));

    int ans = 0;
    for(int i = 1; i < n; i++){
        int tmp = v[0].first;
        if(v[0].second == v[i].second) tmp += v[i].first / 2;
        else tmp += v[i].first;
        chmax(ans, tmp);
    }

    cout << ans << endl;
}