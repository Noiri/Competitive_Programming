#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s;
    t = s;
    reverse(s.begin(), s.end());
    if(stoi(s) != stoi(t)) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}