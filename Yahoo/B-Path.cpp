#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(4);
    for(int i=0; i<3; i++){
        int t, s;
        cin >> t >> s;
        v[t-1]++;
        v[s-1]++;
    }
    int a = 0, b = 0;
    for(auto x: v){
        if(x == 1) a++;
        if(x == 2) b++;
    }
    if(a == 2 && b == 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}