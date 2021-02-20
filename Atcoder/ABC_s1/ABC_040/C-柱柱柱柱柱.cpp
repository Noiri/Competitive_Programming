#include <bits/stdc++.h>
using namespace std;

int dp[155555];

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=1; i<=n; i++) dp[i] = 1e9;

    for(int i=0; i<n; i++){
        dp[i+1] = min(dp[i+1], dp[i]+ abs(a[i+1] - a[i]));
        dp[i+2] = min(dp[i+2], dp[i] + abs(a[i+2] - a[i]));
    }

    cout << dp[n-1] << endl;
    return 0;
}