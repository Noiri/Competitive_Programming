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
    bool ok = true;
    vector<int> v(8);
    rep(i, 8) cin >> v[i];

    rep(i, 7){
        if(v[i] > v[i+1]) ok = false;
    }
    rep(i, 8){
        if(100 > v[i] || 675 < v[i]) ok = false;
        else if(v[i] % 25 != 0) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}