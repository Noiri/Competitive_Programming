#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a, b;
    cin >> a >> b;

    if(a == b){
        ll ans = a ^ 0ll;
        cout << ans << endl;
        return 0;
    }

    ll h = 0;
    int i = 0;
    while(h < a){
        h = pow(2, i);
        i++;
    }
    ll t = 0;
    int j = 0;
    while(t < b){
        t = pow(2, j);
        i++;
    }
    if(t != b) t /= 2;
    t--;

}