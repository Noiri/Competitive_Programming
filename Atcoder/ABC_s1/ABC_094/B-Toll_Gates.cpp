#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> v(n);
    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        v[a-1]++;
    }
    int ans = 1e9;
    int cnt = 0;
    for(int i=0; i<x; i++) cnt += v[i];
    ans = cnt;
    cnt = 0;
    for(int i=x; i<n; i++) cnt += v[i];
    ans = min(ans, cnt);
    cout << ans << endl;
    return 0;
}