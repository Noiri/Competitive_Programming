#include <bits/stdc++.h>
using namespace std;

int  st[26];
int  ts[26];

int main(){
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for(int i=0; i<s.size(); i++){
        int intS = s[i] - 'a';
        int intT = t[i] - 'a';
        if(st[intS] == 0) st[intS] = intT;
        else if(st[intS] != intT) flag = false;

        if(ts[intT] == 0) ts[intT] = intS;
        else if(ts[intT] != intS) flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}