#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int i=0; i<n; i++){
        ll a; cin >> a;
        ans += a-1;
    }
    cout << ans << endl;
    return 0;
}