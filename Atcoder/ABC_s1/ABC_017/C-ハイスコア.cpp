#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector<ll> v(m+2);
    ll ans = 0;
    for(int i=0; i<n; i++){
        int l, r;
        ll s;
        cin >> l >> r >> s;
        v[l] += s;
        v[r+1] -= s;
        ans += s;
    }
    for(int i=0; i<v.size(); i++) v[i+1] += v[i];
    ll Mi = *min_element(v.begin()+1, v.end()-1);
    cout << ans-Mi << endl;
    return 0;
}