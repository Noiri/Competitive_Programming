#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    if(n % 2 == 1){
        n -= 2;
        ans = n;
        while(n > 1){
            n -= 2;
            ans += 2*n;
        }
    }
    else if(n % 2 == 0){
        n /= 2;
        int i = 1;
        while(n >= 1){
            n -= 1;
            ans += 4*n;
        }
    }
    cout << ans << endl;
    return 0;
}
