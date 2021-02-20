#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int ans = 1e9;
    for(int i=0; i<s.size()-3+1; i++){
        int num = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
        ans = min(ans, abs(num - 753));
    }
    cout << ans << endl;
}