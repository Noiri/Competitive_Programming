#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t, r;
    cin >> s >> t;
    r = s + t;
    int n = stoi(r);
    for(int i=1; i<=1000; i++){
        if(n == i*i){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}