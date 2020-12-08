#include <bits/stdc++.h>
using namespace std;

char m[4][4];

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++) cin >> m[i][j];
    }
    for(int i=3; i>=0; i--){
        for(int j=3; j>=0; j--){
            if(j == 0) cout << m[i][j];
            else cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}