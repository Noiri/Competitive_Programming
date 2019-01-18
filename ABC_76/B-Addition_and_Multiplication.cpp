#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int ans = 1;
    for(int i=0; i<n; i++){
        ans = min(ans*2, ans+k);
    }
    cout << ans << endl;
    return 0;
}