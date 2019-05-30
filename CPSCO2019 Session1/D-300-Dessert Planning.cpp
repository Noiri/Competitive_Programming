#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main(){
    ll n;
    cin >> n;
    
    ll ab = 1;
    ll c = 0;
    for(int i=0; i<n; i++){
        ll ab_now = ab;
        ab = 3*(ab + 2*c)%mod;
        c = (ab_now + 2*c)%mod;
    }

    ll ans = 2*(ab + c)%mod;
    cout << ans << endl;
}