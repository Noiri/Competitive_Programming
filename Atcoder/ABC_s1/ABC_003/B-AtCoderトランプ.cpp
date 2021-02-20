#include <bits/stdc++.h>
using namespace std;

char w[] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

int main(){
    string s, t;
    cin >> s >> t;

    bool flag = true;
    for(int i=0; i<s.size(); i++){
        if(s[i] == t[i]) continue;
        else if(s[i] == '@'){
            bool ok = false;
            for(int j=0; j<7; j++){
                if(t[i] == w[j]) ok = true;
            }
            if(ok == false) flag = false;
        }
        else if(t[i] == '@'){
            bool ok = false;
            for(int j=0; j<7; j++){
                if(s[i] == w[j]) ok = true;
            }
            if(ok == false) flag = false;
        }
        else flag = false;
    }
    if(flag) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
}