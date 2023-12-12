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
    ll n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    map<int, ll> m;
    rep(i, n) m[a[i]] += b[i];

    vector<pair<int, ll>> v;
    for(auto p: m) v.push_back(p);

    sort(all(v));
    ll sum = 0;
    for(auto x: v) sum += x.second;

    if(sum <= k){
        cout << 1 << endl;
        return 0;
    }

    for(int i = 0; i < v.size(); i++){
        if(sum <= k){
            cout << v[i-1].first + 1 << endl;
            return 0;
        }
        sum -= v[i].second;
    }

    cout << v.back().first + 1 << endl;

}