#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int ans = 1;
    n -= k;
    while(n > 0){
        n = n - (k-1);
        ans++;
    }
    cout << ans << endl;
    return 0;
}