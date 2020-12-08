#include <bits/stdc++.h>
#define rep(i, m, n) for(int i = m;i < n;i++)
using namespace std;

int arr(int x){
    if(x%2 == 0) return x/2;
    return x*3+1;
}

bool flag[5];

int main(){
    int s;
    cin >> s;
    int cnt = 0;
    while(1){
        cnt++;
        if(cnt == 1) s;
        else s = arr(s);
        if(s<=4 && flag[s]){
            cout << cnt << endl;
            return 0;
        }
        else if(s <= 4)flag[s] = true;
    }
    return 0;
}