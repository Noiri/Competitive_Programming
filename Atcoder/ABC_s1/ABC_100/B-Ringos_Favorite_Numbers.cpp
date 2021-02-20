#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    int cnt = 0, i = 0;
    while(cnt < n){
        i++;
        int div_num = 0;
        int tmp = i;
        while(tmp%100 == 0){
            tmp /= 100;
            div_num++;
        }
        if(d == div_num) cnt++;
    }
    cout << i << endl;
    return 0;
}