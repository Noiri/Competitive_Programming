#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    long long k; cin >> k;
    int one = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') one++;
        else break;
    }
    if(one >= k) cout << '1' << endl;
    else cout << s[one] << endl;
    return 0;
}