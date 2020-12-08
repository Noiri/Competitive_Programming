#include <bits/stdc++.h>
using namespace std;

int main(){
    double df = 1e9;
    double n, t, a;
    int ans;
    cin >> n >> t >> a;
    for(int i=0; i<n; i++){
        double h;
        cin >> h;
        if(df > abs(a - (t - h * 0.006))){
            ans = i+1;
            df = abs(a - (t - h * 0.006));
            }
    }
    cout << ans << endl;
}