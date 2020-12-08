#include <bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin >> day;

    if(day == 25) cout << "Christmas" << endl;
    else if(day == 24) cout << "Christmas Eve" << endl;
    else if(day == 23) cout << "Christmas Eve Eve" << endl;
    else cout << "Christmas Eve Eve Eve" << endl;

    return 0;
}