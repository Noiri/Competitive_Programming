#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    double ans = 0;
    for(int i=0; i<n; i++){
        double x;
        string s;
        cin >> x >> s;
        if(s == "BTC") ans += x *  380000.0;
        else ans += x;
    }
    cout << ans << endl;
    return 0;
}