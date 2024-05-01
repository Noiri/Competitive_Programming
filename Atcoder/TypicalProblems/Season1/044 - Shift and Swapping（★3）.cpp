#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int mod(int x, int div){
    int rem = x % div;
    if(rem < 0) rem += div;
    return rem;
}

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    int rc = 0;
    rep(i, q){
        int t, x, y;
        cin >> t >> x >> y;
        int rx = mod(x-1-rc, n);
        int ry = mod(y-1-rc, n);
        if(t == 1){
            int tmp = a[rx];
            a[rx] = a[ry];
            a[ry] = tmp;
        }
        else if(t == 2){
            rc++;
        }
        else if(t == 3){
            cout << a[rx] << endl;
        }
    }
}