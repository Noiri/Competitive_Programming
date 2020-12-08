#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    ll ans = 0;

    ll r = 1;
    for(ll l=0; l<n; l++){
        while(r < n && (r <= l || v[r-1] < v[r])) r++;
        ans += r - l;
        if(l == r) r++;
    }
    cout << ans << endl;
    return 0;
}