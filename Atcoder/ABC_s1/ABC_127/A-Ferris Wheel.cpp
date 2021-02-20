#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    int a, b;
    cin >> a >> b;
    if(13 <= a) cout << b << endl;
    else if(a <= 5) cout << 0 << endl;
    else cout << b/2 << endl;
}