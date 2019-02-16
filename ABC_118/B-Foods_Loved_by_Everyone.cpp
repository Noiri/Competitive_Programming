#include <bits/stdc++.h>
using namespace std;

int a[100];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        for(int j=0; j<k; j++){
            int t;
            cin >> t;
            a[t-1]++;
        }
    }
    int ans = 0;
    for(int i=0; i<50; i++){
        if(a[i] == n) ans++;
    }
    cout << ans << endl;
    return 0;
}  