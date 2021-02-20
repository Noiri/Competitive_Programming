#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    long long  ans = 0;
    
    //count case1
    for(int i=k; i<=n; i+=k) ans++;
    ans = pow(ans, 3);

    //count case2
    if(k%2 == 0){
        long long temp = 0;
        for(int i=k/2; i<=n; i+=k) temp++;
        ans += pow(temp, 3);
    }

    cout << ans << endl;
    return 0;
}