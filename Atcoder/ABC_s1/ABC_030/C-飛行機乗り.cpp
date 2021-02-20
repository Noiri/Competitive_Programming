#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<ll> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int ans = 0;
    ll t = 0;
    while(1){
        if(ans%2 == 0){
            auto ind = lower_bound(a.begin(), a.end(), t);
            if(ind == a.end()) break;
            else {
                t = *ind + x;
                ans ++;
            }
        }
        else {
            auto ind = lower_bound(b.begin(), b.end(), t);
            if(ind == b.end()) break;
            else {
                t = *ind + y;
                ans++;
            }
        }
    }
    cout << ans / 2 << endl;
    return 0;
}