#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(i+2<n && abs(v[i+2] - v[i]) < abs(v[i+1] - v[i])){
            ans += abs(v[i+2] - v[i]);
            i++;
        }
        else {
            ans += abs(v[i+1] - v[i]);
        }
    }
    cout << ans << endl;
}