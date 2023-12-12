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
    vector<pair<long double, int>> v(n);
    rep(i, n){
        long double a, b;
        cin >> a >> b;
        v[i].first = a / (a + b);
        v[i].second = - (i+1);
    }
    sort(rall(v));

    rep(i, n) cout << -v[i].second << " ";
    cout << endl;
}