#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string t, s;
    cin >> t;
    s = t;
    reverse(t.begin(), t.end());

    vector<int> w(n), e(n);

    for(int i=0; i<n-1; i++){
        w[i+1] += w[i];
        if(s[i] == 'W') w[i+1]++;

        e[i+1] += e[i];
        if(t[i] == 'E') e[i+1]++;
    }
    reverse(e.begin(), e.end());

    int ans = 1e9;
    for(int i=0; i<n; i++) ans = min(ans, e[i]+w[i]);
    cout << ans << endl;
    return 0;
}