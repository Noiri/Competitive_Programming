#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int cnt = 0;
    bool flag = true;
    while(flag){
        //bool flag = true; //正しく動作する
        flag = true; //動かない
        
        for(int i=0; i<n; i++) if(v[i] > 0) flag = false;
        for(int i=0; i<n; i++) cout << v[i] << endl;
        cout << "flag: " <<  flag << endl;
        if(flag) break;

        for(int i=0; i<n; i++) v[i]--;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}