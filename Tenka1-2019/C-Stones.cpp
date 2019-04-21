#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(n+1);

    for(int i=0; i<n; i++){
        if(s[i] == '#') v[i+1]++;
    }
    for(int i=0; i<n; i++) v[i+1] += v[i];

    int ans = 1e9;
    for(int i=0; i<=n; i++){
        ans = min(ans, v[i] + (n-i) - (v[n] - v[i]));
    }
    cout << ans << endl;
    return 0;
}