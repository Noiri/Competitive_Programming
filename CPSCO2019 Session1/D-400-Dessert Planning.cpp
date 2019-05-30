#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll RepeatSquaring(ll n, ll p, ll m){
    if(p == 0) return 1;
    else if(p%2 == 0){
        ll t = RepeatSquaring(n, p/2, m);
        return t*t%m;
    }
    else if(p%2 == 1){
        ll t = RepeatSquaring(n, p-1, m);
        return n*t%m;
    }
}

int main(){
    ll n;
    cin >> n;
    ll ans = 8 * RepeatSquaring(5, n-1, mod);
    cout << ans % mod << endl;
}