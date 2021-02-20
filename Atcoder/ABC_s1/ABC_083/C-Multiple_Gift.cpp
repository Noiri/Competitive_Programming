#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll x, y;
    cin >> x >> y;
    ll A = x;
    ll cnt = 0;
    while(A <= y){
        A = pow(2LL, cnt+1) * x;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}