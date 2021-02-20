#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    n--;
    vector<int> c(n), s(n), f(n);
    for(int i=0; i<n; i++) cin >> c[i] >> s[i] >> f[i];

    for(int pos=0; pos<n; pos++){
        int ans = 0;
        for(int i=pos; i<n; i++){
            if(ans < s[i]) ans = s[i];
            if(ans % f[i] != 0) ans += f[i] - (ans % f[i]);
            ans += c[i];
        }
        cout << ans << endl;
    }
    cout << 0 << endl;
    return 0;
}