#include <bits/stdc++.h>
using namespace std;

//5min

int main(){
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '0') x++;
        else y++;
    }
    cout << 2*min(x, y) << endl;
    return 0;
}