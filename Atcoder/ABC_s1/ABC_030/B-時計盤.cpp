#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double m;
    cin >> n >> m;
    n %= 12;

    double ans = abs(n*30 - m*5.5);
    cout << min(ans, 360.0-ans) << endl;
    return 0;
}