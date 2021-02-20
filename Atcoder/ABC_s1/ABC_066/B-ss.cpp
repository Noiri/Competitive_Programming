#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i=s.size()-1; i>0; i--){
        if(i%2 == 0 && s.substr(0, i/2) == s.substr(i/2, i/2)) ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}