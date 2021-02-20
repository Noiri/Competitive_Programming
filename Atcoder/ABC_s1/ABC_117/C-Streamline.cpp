#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> x(m), y(m-1);
    for(int i=0; i<m; i++) cin >> x[i];
    sort(x.begin(), x.end());
    for(int i=1; i<m; i++) y[i-1] = x[i] - x[i-1];
    sort(y.begin(), y.end());
    int last = (m-1) - (n-1);
    int ans = 0;
    if(last > 0) for(int i=0; i<last; i++) ans += y[i];
    cout << ans << endl;
    return 0;
}