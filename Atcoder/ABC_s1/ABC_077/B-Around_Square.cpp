#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 1;
    while(n >= ans * ans){
        ans++;
    }
    cout << (ans - 1)*(ans - 1) << endl;
    return 0;
}