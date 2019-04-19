#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    bool flag = true;

    while(flag){
        flag = true;
        cnt++;
        if(cnt == 5) flag = false;
    }
    cout << cnt << endl;
    return 0;
}