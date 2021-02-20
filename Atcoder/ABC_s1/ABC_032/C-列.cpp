#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    ll k;
    cin >> n >> k;
    bool zero = false;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] == 0) zero = true;
    }

    if(zero){
        cout << n << endl;
        return 0;
    }

    int ans = 0;
    int right = 0;
    ll tmp = 1;
    for(int left=0; left<n; left++){
        while(right < n && tmp * v[right] <= k){
            tmp *= v[right];
            right++;
        }
        ans = max(ans, right - left);
        if(left == right) right++;
        else tmp /= v[left];
    }
    cout << ans << endl;
    return 0;
}