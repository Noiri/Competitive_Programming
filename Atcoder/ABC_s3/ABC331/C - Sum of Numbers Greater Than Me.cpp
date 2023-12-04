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
    vector<pair<ll, ll>> v(n);
    map<ll, ll> cnt;
    ll sum = 0;
    rep(i, n){
        cin >> v[i].first;
        v[i].second = i;
        sum += v[i].first;
        cnt[v[i].first] += 1;
    }
    sort(all(v));

    vector<ll> ans(n);
    rep(i, n){
        sum -= v[i].first * cnt[v[i].first];
        for(int j = 0; j < cnt[v[i].first]; j++){
            ans[v[i+j].second] = sum;
        }
        i += cnt[v[i].first] - 1;
    }

    rep(i, n) cout << ans[i] << " ";
    cout << endl;
}