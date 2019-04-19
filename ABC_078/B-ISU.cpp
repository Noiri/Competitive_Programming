#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int ans = 0;
    x -= (y + 2*z);
    while(x >= 0){
        ans++;
        x -= (y + z);
    }
    cout << ans << endl;
    return 0;
}