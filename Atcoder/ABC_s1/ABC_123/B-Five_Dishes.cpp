#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int ans = 0;
    vector<int> v(5);
    for(int i=0; i<5; i++) cin >> v[i];
    int last = 9, ind = 0;
    for(int i=0; i<5; i++){
        if(last%10 >= v[i]%10 && v[i]%10 != 0){
            last = v[i];
            ind = i;
        }
    }
    for(int i=0; i<5; i++){
        if(i == ind) continue;
        ans += (v[i]/10 * 10) + (v[i]%10 != 0)*10;
    }
    ans += v[ind];
    cout << ans << endl;
    return 0;
}