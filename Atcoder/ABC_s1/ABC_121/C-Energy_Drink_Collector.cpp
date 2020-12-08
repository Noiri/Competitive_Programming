#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

int main(){
    int n, m;
    cin >> n >> m;
    vector<P> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    ll cnt = m;
    for(int i=0; i<v.size(); i++){
        if(cnt - v[i].second > 0){
            ans += v[i].first * v[i].second;
            cnt -= v[i].second;
        }
        else {
            ans += v[i].first * cnt;
            break;
        }
    }
    cout << ans << endl;
    return 0;

}