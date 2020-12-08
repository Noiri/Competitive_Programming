#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<ll> l, r;

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    ll ans = 1e9;
    for(int i=0; i<=n-k; i++){
        ll l = v[i], r = v[i+k-1];
        ans = min({ans, abs(l-r)+abs(l), abs(l-r)+abs(r)});
    }
    cout << ans << endl;
    return 0;
}