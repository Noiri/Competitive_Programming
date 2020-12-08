#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    for(int i=0; i<s.size(); i++){
        string tmp = "";
        for(int j=i; j<s.size(); j++){
            string t = (string() + s[j]);
            if(t == "A" || t == "C" || t == "G" || t == "T") tmp += t;
            else break;
        }
        if(ans.size() < tmp.size()) ans = tmp;
    }
    cout << ans.size() << endl;
    return 0;
}