#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = false;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];

    int ind = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        ind = v[ind];
        cnt++;
        if(ind == 2){
            flag = true;
            break;
        }
    }
    if(flag) cout << cnt << endl;
    else cout << -1 << endl;
    return 0;
}