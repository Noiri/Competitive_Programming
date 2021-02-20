#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t, r;
    cin >> s >> t;
    r = s;
    bool flag = false;
    while(1){
        string tail = string() + r[r.size()-1];
        r.erase(r.end()-1);
        reverse(r.begin(), r.end());
        r += tail;
        reverse(r.begin(), r.end());
        if(r == t) flag = true;
        if(s == r) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}