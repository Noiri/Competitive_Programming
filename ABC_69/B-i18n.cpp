#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << (string()+s[0]) + to_string(s.size() - 2) + (string()+s[s.size()-1]) << endl;
    return 0;
}