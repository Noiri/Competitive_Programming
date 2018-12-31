#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    if(a > x) cout << "NO" << endl;
    else if(a + b < x) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}