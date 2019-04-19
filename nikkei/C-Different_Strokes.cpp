#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    ll ans = 0;
    for(int i=0; i<n; i++){
        ll a, b;
        cin >> a >> b;
        v[i] = a + b;
        ans -= b;
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i+=2) ans += v[i];
    cout << ans << endl;
    return 0;
}