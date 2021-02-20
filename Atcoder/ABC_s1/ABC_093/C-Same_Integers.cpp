#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    for(int i=0; i<3; i++) cin >> v[i];

    int ma = 0, ma_ind = 0;
    vector<int> ind_o, ind_e;
    for(int i=0; i<3; i++){
        if(v[i]%2 == 0) ind_e.push_back(i);
        else ind_o.push_back(i);
        if(ma < v[i]){
            ma = v[i];
            ma_ind = i;
        }
    }

    int ans = 0;

    if(ind_e.size() == 2){
        v[ind_e[0]]++;
        v[ind_e[1]]++;
        for(int i=0; i<3; i++)ans += (v[ma_ind] - v[i])/2;
        ans++;
    }
    else if(ind_o.size() == 2){
        v[ind_o[0]]++;
        v[ind_o[1]]++;
        for(int i=0; i<3; i++) ans += (v[ma_ind] - v[i])/2;
        ans++;
    }
    else {
        for(int i=0; i<3; i++) ans += (ma - v[i])/2;
    }
    cout << ans << endl;
    return 0;
}