#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<double> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    double ans = 0;
    sort(v.begin(), v.end());
    for(int i=n-k; i<n; i++){
        ans = (ans + v[i]) / 2;
    }
    cout << setprecision(9) << ans << endl;
    return 0;
}