#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(m[a] == 0) m[a] = 1;
        else if(m[a] == 1) m[a] = 0;
    }
    int ans = 0;
    for(auto p: m) ans += p.second;
    cout << ans << endl;
    return 0;
}