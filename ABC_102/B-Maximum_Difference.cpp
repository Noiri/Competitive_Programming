#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ma = 0, mi = 1e9;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        ma = max(ma, x);
        mi = min(mi, x);
    }
    cout << abs(ma - mi) << endl;
    return 0;
}