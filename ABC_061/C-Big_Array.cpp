#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<P> v(n);
    for(int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    ll cnt = 0;
    for(int i=0; i<n; i++){
        cnt += v[i].second;
        if(cnt >= k){
            cout << v[i].first << endl;
            break;
        }
    }
    return 0;
}