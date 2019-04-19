#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> v(n+1);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v[i+1] = v[i] + a;
    }

    ll ans = 0;
    for(int i=0; i<=n-k; i++) ans += v[i+k] - v[i];
    cout << ans << endl;
    return 0;
}