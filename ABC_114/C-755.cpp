#include <bits/stdc++.h>
using namespace std;

template<class T> bool exist(string s, T key){
    return (s.find(key) != string::npos);
}

vector<string> v;
string n;
int ans = 0;

void gen(string s){
    if(stol(s) <= stol(n)){
        if(exist(s, "7") && exist(s, "5") && exist(s, "3")){
            ans++;
        }
        gen(s + "3");
        gen(s + "5");
        gen(s + "7");
    }
    return;
}

int main(){
    cin >> n;
    gen("0");
    cout << ans << endl;
    return 0;
}