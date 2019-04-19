#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    int k;
    cin >> a[0] >> a[1] >> a[2] >> k;
    sort(a, a+3);
    for(int i=0; i<k; i++) a[2] *= 2;
    cout << a[0] + a[1] + a[2] << endl;
    return 0;
}