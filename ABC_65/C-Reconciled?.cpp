#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

//40min

ll fact(ll x){
    ll res = 1;
    for(ll i=1; i<=x; i++) res = res * i % MOD;
    return res;
}

int main(){
    ll n, m;
    cin >> n >> m;
    if(abs(n - m) == 1) cout << fact(n) * fact(m) % MOD << endl;
    else if(abs(n - m) == 0) cout << fact(n) * fact(m) * 2 % MOD << endl;
    else cout << 0 << endl;
    return 0;
}