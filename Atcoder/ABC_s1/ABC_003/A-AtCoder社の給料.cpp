#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double ans = 0;
    for(int i=1; i<=n; i++){
        double N = i;
        ans += N*10000 * 1/(double)n;
    }
    cout << ans << endl;
}