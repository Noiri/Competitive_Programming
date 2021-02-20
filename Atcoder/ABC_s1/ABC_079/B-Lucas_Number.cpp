#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 2 << endl;
        return 0;
    }
    else if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    ll a = 2, b = 1, c = 0;
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}