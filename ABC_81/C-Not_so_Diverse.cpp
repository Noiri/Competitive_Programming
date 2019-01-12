#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v[a]++;
    }
    sort(v.begin(), v.end());
    int kind = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] != 0) kind++;
    }
    int ans = 0;
    for(int i=0; i<kind-k; i++){
        ans += v[n-kind+i+1];
    }
    cout << ans << endl;
    return 0;
}