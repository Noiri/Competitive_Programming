#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[2], b[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1];
    bool flag = false;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(a[i] == b[j]) flag = true;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}