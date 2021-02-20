#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> t(n+1), x(n+1), y(n+1);
    t[0] = 0, x[0] = 0, y[0] = 0;
    for(int i=1; i<=n; i++) cin >> t[i] >> x[i] >> y[i];

    bool flag = true;
    for(int i=0; i<n; i++){
        int T = t[i+1] - t[i];
        int d = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if(T-d < 0 || (T-d)%2 == 1) flag = false;
        }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}