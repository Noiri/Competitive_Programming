#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> v = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
    int w = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == 'W') w++;
        if(s[i] == s[i+1]) break;
    }

    int ans = 3 - w;
    if(ans < 0){
        ans += (int)v.size();
    }
    cout << v[ans] << endl;
    return 0;
}