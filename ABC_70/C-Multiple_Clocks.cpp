#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(ll x, ll y){
    if(x%y == 0) return y;
    return GCD(y, x%y);
}

int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    if(n == 1){
        cout << v[0] << endl;
        return 0;
    }

    ll lcm = v[0];
    for(int i=1; i<n; i++){
        ll gcd = GCD(lcm, v[i]);
        lcm = lcm / gcd * v[i];
    }
    cout << lcm << endl;
    return 0;
}