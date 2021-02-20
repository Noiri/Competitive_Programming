#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int x = 1900 * m + 100 * (n-m);
    cout <<  x * pow(2, m) << endl;
    return 0;
}