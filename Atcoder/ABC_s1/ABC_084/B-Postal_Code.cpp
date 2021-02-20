#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool flag = true;
    for(int i=0; i<a; i++){
        if(!isalnum(s[i])) flag = false;
    }
    if(s[a] != '-') flag = false;
    for(int i=a+1; i<s.size(); i++){
        if(!isalnum(s[i])) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}