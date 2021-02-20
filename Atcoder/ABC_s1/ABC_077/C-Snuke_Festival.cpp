#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m;i < n;i++)
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    long long ans = 0;

    rep(i, 0, n){
        long long x = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        long long y = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
        ans += x * y;
    }
    cout << ans << endl;
    return 0;
}