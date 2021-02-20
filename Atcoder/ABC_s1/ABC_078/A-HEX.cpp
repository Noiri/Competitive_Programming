#include <bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin >> x >> y;
    if(x < y) cout << "<" << endl;
    else if(x > y) cout << ">" << endl;
    else cout << "=" << endl;
    return 0;
}