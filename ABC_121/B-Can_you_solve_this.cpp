#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> v(m);
    for(int i=0; i<m; i++) cin >> v[i];

    int cnt = 0;
    for(int i=0; i<n; i++){
        int ans = c;
        for(int j=0; j<m; j++){
            int a;
            cin >> a;
            ans += v[j] * a;
        }
        if(ans > 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}