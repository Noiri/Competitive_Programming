#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string ans = "";
    for(int i=0; i<3; i++){
        cin >> s;
        ans += string() + s[i];
    }
    cout << ans << endl;
    return 0;
}