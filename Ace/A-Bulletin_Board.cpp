#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, w;
    cin >> n >> h >> w;
    int x = n - h + 1;
    int y = n - w + 1;
    cout << x * y << endl;
    return 0;
}