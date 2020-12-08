#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, X, Y;
    cin >> n >> m >> X >> Y;
    int z = X;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        z = max(z, x);
    }
    z++;
    bool flag = true;
    for(int i=0; i<m; i++){
        int y;
        cin >> y;
        if(z > y) flag = false;
    }
    if(flag && X < z && z <= Y) cout << "No War" << endl;
    else cout << "War" << endl;
    return 0;
}