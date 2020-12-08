#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    ll r, d, x;
    cin >> r >> d >> x;
    ll ans = x;
    for(int i=1; i<=10; i++){
        x = r * x - d;
        cout << x << endl;
    }
}