#include <bits/stdc++.h>
using namespace std;

int sum(){
    int res = 0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++) res += i * j;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int diff = sum() - n;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(i * j == diff) cout << i << " x " << j << endl;
        }
    }
    return 0;
}