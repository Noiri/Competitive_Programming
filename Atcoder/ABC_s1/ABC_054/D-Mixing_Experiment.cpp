#include <bits/stdc++.h>
using namespace std;

int dp[41][501][501];
int inf = 1e6;

int main(){
    int n, ma, mb;
    cin >> n >> ma >> mb;

    vector<int> a(n), b(n), c(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    // init dp table
    for(int i=0; i<41; i++){
        for(int j=0; j<501; j++){
            for(int k=0; k<501; k++){
                dp[i][j][k] = inf;
            }
        }
    }
    dp[0][0][0] = 0;

    for(int i=0; i<n; i++){
        for(int f=0; f<401; f++){
            for(int s=0; s<401; s++){
                if(dp[i][f][s] == inf) continue;
                dp[i+1][f][s] = min(dp[i+1][f][s], dp[i][f][s]);
                dp[i+1][f + a[i]][s + b[i]] = min(dp[i+1][f + a[i]][s + b[i]], dp[i][f][s] + c[i]);
            }
        }
    }

    
    int ans = inf;
    for(int i=1; i<401; i++){
        for(int j=1; j<401; j++){
            // ここをma*i==mb*jとしていたのでwaだった。
            if(ma*j == mb*i) ans = min(ans, dp[n][i][j]);
        }
    }
    if(ans == inf) ans = -1;

    cout << ans << endl;
    return 0;
}