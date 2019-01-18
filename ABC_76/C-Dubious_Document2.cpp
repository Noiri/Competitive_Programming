#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    for(int i=s.size()-t.size(); i>=0; i--){
        for(int j=0; j<t.size(); j++){
            if(s[i+j] != '?' && s[i+j] != t[j]) goto ER;
        }
        for(int j=0; j<t.size(); j++) s[i+j] = t[j];
        for(int j=0; j<s.size(); j++){
            if(s[j] == '?') s[j] = 'a';
        }
        cout << s << endl;
        return 0;
        ER:;
    }
    cout << "UNRESTORABLE" << endl;
}