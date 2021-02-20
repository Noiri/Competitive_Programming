#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    string ans = "";
    ll base = 1;
    while(n != 0){
        if(n%(base*2) != 0){
            n -= base;
            ans += "1";
        } 
        else ans += "0";
        base *= -2;
    }
    if(ans == "") ans = "0";
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}