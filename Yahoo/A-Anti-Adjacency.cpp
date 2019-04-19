#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a = n/2 + n%2;
    if(k <= a) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}