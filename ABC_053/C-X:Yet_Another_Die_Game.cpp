#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    if(n <= 6){
        cout << 1 << endl;
        return 0;
    }
    else if(n <= 11){
        cout << 2 << endl;
        return 0;
    }
    
    ll m = n % 11;
    ll d = n / 11;
    if(m == 0) cout << 2*d << endl;
    else if(m <= 6) cout << 2*d + 1 << endl;
    else cout << 2*d + 2 << endl;
    return 0;
}