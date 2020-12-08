#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int bit=0; bit<(1<<3); bit++){
        int tmp = (int)(s[0] - '0');
        char op[3];
        for(int i=0; i<3; i++){
            if(bit & (1<<i)){
                tmp += (int)(s[i+1] - '0');
                op[i] = '+';
            }
            else{
                tmp -= (int)(s[i+1] - '0');
                op[i] = '-';
            }
        }
        if(tmp == 7){
            cout << s[0];
            for(int i=0; i<3; i++) cout << op[i] << s[i+1];
            cout << "=7" << endl;
            return 0;
        }
    }
    return 0;
}