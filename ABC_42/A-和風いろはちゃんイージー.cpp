#include <bits/stdc++.h>
using namespace std;

int main(){
    int f = 0, s = 0;
    for(int i = 0; i<3; i++){
        int a;
        cin >> a;
        if(a == 5) f++;
        else if(a == 7) s++; 
    }
    if(f == 2 && s == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}