#include <bits/stdc++.h>
using namespace std;
const int LIM = 10;

int n;
int p[LIM];

int main(){
    cin >> n;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> p[i];
        ans += p[i];
    }
    sort(p, p+n);
    cout << ans - p[n-1]/2 << endl;
    return 0;
}