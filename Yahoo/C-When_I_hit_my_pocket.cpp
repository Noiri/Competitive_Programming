#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll k, a, b;
    cin >> k >> a >> b;
    if(a + 2 >= b || k < a+1){
        cout << ll(k+1) << endl;
        return 0;
    }
    ll s = k - (a + 1);
    ll ans = (s/2+1)*b - (s/2)*a + s%2;
    cout << ans << endl;
    return 0;
}