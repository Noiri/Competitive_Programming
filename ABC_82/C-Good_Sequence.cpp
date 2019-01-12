#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    int ans = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a > n) ans++;
        else v[a]++;
    }
    for(int i=1; i<=n; i++){
        if(v[i] >= i) ans += v[i] - i;
        else ans += v[i];
    }
    cout << ans << endl;
    return 0;
}