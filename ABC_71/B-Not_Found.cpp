#include <bits/stdc++.h>
using namespace std;

int a[999];

int main(){
    string s;
    cin >> s;
    for(char c: s) a[(int)c]++;
    for(int i='a'; i<='z'; i++){
        if(a[i] == 0){
            cout << (char)i << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}