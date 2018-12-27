#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for(int i=0; i<3; i++) cin >> a[i];
    sort(a, a+3);
    int ans = abs(a[1] - a[0]) + abs(a[2] - a[1]);
    cout << ans << endl;
    return 0;
}