#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 1e9;
    for(int i=0; i<=sqrt(n)+1; i++){
        for(int j=0; j<=n; j++){
            if(i*j<=n) ans = min(ans, abs(i-j) + n-i*j);
        }
    }
    cout << ans << endl;
    return 0;
}