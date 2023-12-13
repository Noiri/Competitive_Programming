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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<int> c;
    rep(i, n) c.push_back(a[i]);
    rep(i, m) c.push_back(b[i]);
    sort(all(c));

    rep(i, n) cout << (lower_bound(c.begin(), c.end(), a[i]) - c.begin())+1 << " ";
    cout << endl;
    rep(i, m) cout << (lower_bound(c.begin(), c.end(), b[i]) - c.begin())+1 << " ";
    cout << endl;
}