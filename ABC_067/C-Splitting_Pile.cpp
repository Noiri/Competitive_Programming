#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> v(n);

    ll S = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        S += v[i];
    }

    ll sum = 0, ans = 1e18;
    for(int i=1; i<n; i++){
        sum += v[i-1];
        ans = min(ans, abs(sum - (S - sum)));
    }
    cout << ans << endl;
    return 0;
}