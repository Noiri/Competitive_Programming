#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0) ans += v[i];
        else ans -= v[i];
    }
    cout << ans << endl;
    return 0;
}