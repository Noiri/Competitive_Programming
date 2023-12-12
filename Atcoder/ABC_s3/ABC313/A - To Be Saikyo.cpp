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
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    int m = 0;
    for(int i = 1; i < n; i++) chmax(m, p[i]);

    if(p[0] > m) cout << 0 << endl;
    else cout << m - p[0] + 1 << endl;
}