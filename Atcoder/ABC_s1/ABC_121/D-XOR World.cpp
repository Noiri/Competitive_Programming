#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll xor_sum(ll x){
    ll ret = 0;
    for(ll i = x/4 * 4; i <= x; i++) ret ^= i;
    return ret;
}

int main(){
    ll a, b;
    cin >> a >> b;
    ll ans = xor_sum(b) ^ xor_sum(a-1);
    cout << ans << endl;
    return 0;
}