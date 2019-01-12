#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    bool flag = true;
    for(int i=0; i<n; i++) cin >> v[i];
    int ans = 0;
    while(flag){
        for(int i=0; i<n; i++){
            if(v[i] % 2 == 1) flag = false;
            v[i] /= 2;
        }
        ans += flag;
    }
    cout << ans << endl;
    return 0;
}