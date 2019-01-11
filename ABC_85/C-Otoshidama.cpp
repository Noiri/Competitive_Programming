#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, y;
    cin >> n >> y;

    for(int i=0; i<=(y/10000)+1; i++){
        for(int j=0; j<=(y/5000)+1; j++){
            int k = y/1000 - 10*i - 5*j;
            if(k >= 0 && n == i+j+k){
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}