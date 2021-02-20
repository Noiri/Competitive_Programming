#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n+2);
    for(int i=0; i<m; i++){
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=0; i<n; i++) v[i+1] += v[i];
    int ans = 0;
    for(int i=0; i<v.size(); i++) ans += (v[i] == m);
    cout << ans << endl;
}