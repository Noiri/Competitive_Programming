#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if(b <= c){
        ans += b * 2;
        c -= b;

        if(a > c) ans += c;
        else if(a == c) ans += c;
        else if(a < c) ans += a + 1;
        
    }
    else{
        ans += b + c;
    }
    cout << ans << endl;
    return 0;
}