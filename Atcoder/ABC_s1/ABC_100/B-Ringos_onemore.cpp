#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    int cnt = 0;
    for(int i=1; i<10000000; i++){
        if(d == 1){
            if(i%100 == 0 && i%10000 != 0 && i%1000000 != 0) cnt++;
        }
        else if(d == 2){
            if(i%10000 == 0 && i%1000000 != 0) cnt++;
        }
        else if(d == 0){
            if(i%100 != 0 && i%10000 != 0 && i%1000000 != 0) cnt++;
        }
        if(cnt == n){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}