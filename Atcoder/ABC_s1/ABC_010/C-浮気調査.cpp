#include <bits/stdc++.h>
using namespace std;

int main(){
    double ax, ay, bx, by, t, v;
    cin >> ax >> ay >> bx >> by >> t >> v;
    double V = t * v;
    bool flag = false;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        double ux, uy;
        cin >> ux >> uy;
        double D = sqrt(pow(ax - ux, 2) + pow(ay - uy, 2)) + sqrt(pow(bx - ux, 2) + pow(by - uy, 2));
        if(D <= V) flag = true;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}