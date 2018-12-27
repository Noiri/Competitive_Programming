#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i] -= i + 1;
    }
    sort(v.begin(), v.end());
    ll median = (n % 2 == 0) ? v[n / 2 - 1] : v[(n + 1) / 2 - 1];
    ll ans = 0;
    for(ll x:v) ans += abs(x - median);
    cout << ans << endl;
    return 0;
}