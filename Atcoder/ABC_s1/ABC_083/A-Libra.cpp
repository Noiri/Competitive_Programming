#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int r = c + d;
    int l = a + b;
    if(r < l) cout << "Left" << endl;
    else if(r > l) cout << "Right" << endl;
    else cout << "Balanced" << endl;
    return 0;
}