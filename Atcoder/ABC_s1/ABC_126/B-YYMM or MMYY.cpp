#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    int l = stoi(s.substr(0, 2));
    int r = stoi(s.substr(2, 2));

    if(l > 12 && r > 12) cout << "NA" << endl;
    else if(l == 0 && r == 0) cout << "NA" << endl;
    else if(l > 12 && r == 0) cout << "NA" << endl;
    else if(r > 12 && l == 0) cout << "NA" << endl;
    else if(l > 12 || l == 0) cout << "YYMM" << endl;
    else if(r > 12 || r == 0) cout << "MMYY" << endl;
    else cout << "AMBIGUOUS" << endl;
}