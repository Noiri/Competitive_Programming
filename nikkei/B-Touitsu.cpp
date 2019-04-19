#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] == b[i] && a[i] != c[i]) ans++;
        else if(a[i] == c[i] && a[i] != b[i]) ans++;
        else if(b[i] == c[i] && b[i] != a[i]) ans++;
        else if(a[i] != b[i] && a[i] != c[i] && b[i] != c[i]) ans += 2;
    }
    cout << ans << endl;
    return 0;
}