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

    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    ll sum = 0;
    for(auto x: a) sum += x;
    int q = sum / n;
    int r = sum % n;

    vector<int> b;
    rep(i, n) b.push_back(q);
    for(int i = n-r; i < n; i++) b[i]++;

    ll ans = 0;
    rep(i, n) ans += abs(a[i] - b[i]);
    cout << ans / 2 << endl;
}