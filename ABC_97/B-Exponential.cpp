#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int ans = 1;
    for(int i=2; i<=1000; i++){
        int cnt = 2;
        while(x >= pow(i, cnt)){
            int expo = pow(i, cnt);
            ans = max(ans, expo);
            cnt++;
        }
    }
    cout << ans << endl;
    return 0;
}