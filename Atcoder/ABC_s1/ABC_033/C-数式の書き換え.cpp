#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> v;
    for(int i=0; i<s.size(); i++){
        int ind = i;
        while(s[ind] != '+' && ind < s.size()) ind++;
        v.push_back(s.substr(i, ind - i));
        i = ind;
    }

    int ans = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i].size() == 1 && v[i] != "0") ans++;
        if(v[i].size() != 1 && v[i].find("0") == string::npos) ans++;
    }
    cout << ans << endl;
    return 0;
}