#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1000000007;

ll fact(ll x){
    ll res = 1;
    for(ll i=1; i<=x; i++){
        res *= i;
        res %= MOD;
    }
    return res;
}

ll powModM(ll a, ll b){
    if(b == 0) return 1;
    if(b%2 == 0){
        ll d = powModM(a, b/2);
        return (d*d) % MOD;
    }
    if(b%2 == 1) return (a*powModM(a, b-1)) % MOD;
}

int main(){
    ll w, h;
    cin >> w >> h;
    w--; h--;
    ll x = (fact(w + h) % MOD);
    ll y = ((powModM(fact(w), MOD-2) * powModM(fact(h), MOD-2))) % MOD;
    cout << (x * y) % MOD << endl;
    return 0;
}