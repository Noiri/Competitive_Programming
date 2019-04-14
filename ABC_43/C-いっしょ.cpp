#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 1e8;
    for(int i=-100; i<=100; i++){
        int tmp = 0;
        for(int j=0; j<n; j++) tmp += pow(i - v[j], 2);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}