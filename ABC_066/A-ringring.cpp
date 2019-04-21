#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for(int i=0; i<3; i++) cin >> a[i];
    sort(begin(a), end(a));
    cout << a[0] + a[1] << endl;
    return 0;
}