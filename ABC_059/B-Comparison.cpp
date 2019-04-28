#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ans;
    if(a.size() > b.size()) ans = "GREATER";
    else if(a.size() < b.size()) ans = "LESS";
    else if(a > b) ans = "GREATER";
    else if(a < b) ans = "LESS";
    else ans = "EQUAL";
    cout << ans << endl;
    return 0;
}