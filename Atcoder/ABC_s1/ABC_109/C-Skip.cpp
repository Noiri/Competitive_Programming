#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

int main(){
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i] = abs(v[i] - x);
    }

    ll d = 0;
    for(int y:v) d = gcd(d, y);
    cout << d << endl;
    return 0;
}