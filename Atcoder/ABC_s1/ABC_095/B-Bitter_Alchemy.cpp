#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int ans = 0, cho = 1e9;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        x -= m;
        ans++;
        cho = min(cho, m);
    }
    cout << ans + x/cho << endl;
    return 0;
}