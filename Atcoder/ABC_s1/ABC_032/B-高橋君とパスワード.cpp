#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    if(k > s.size()){
        cout << 0 << endl;
        return 0;
    }

    set<string> c;
    for(int i=0; i<=s.size()-k; i++){
        c.insert(s.substr(i, k));
    }
    cout << c.size() << endl;
    return 0;
}