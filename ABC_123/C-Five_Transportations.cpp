#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    vector<ll> v(5);
    cin >> n;
    for(int i=0; i<5; i++) cin >> v[i];
    ll mi = *min_element(v.begin(), v.end());
    ll ans = n/mi + (n%mi != 0) + 4;
    cout << ans << endl;
    return 0;
}