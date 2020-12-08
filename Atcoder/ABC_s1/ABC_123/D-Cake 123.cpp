#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int X, Y, Z, k;
    cin >> X >> Y >> Z >> k;

    vector<ll> x(X), y(Y), z(Z);
    for(int i=0; i<X; i++) cin >> x[i];
    for(int i=0; i<Y; i++) cin >> y[i];
    for(int i=0; i<Z; i++) cin >> z[i];

    vector<ll> xy;
    for(int i=0; i<X; i++){
        for(int j=0; j<Y; j++) xy.push_back(x[i] + y[j]);
    }
    sort(xy.rbegin(), xy.rend());

    vector<ll> xyz;
    //X*Yがkを超えるとは限らないので注意
    for(int i=0; i<min(k, X*Y); i++){
        for(int j=0; j<Z; j++) xyz.push_back(xy[i] + z[j]);
    }
    sort(xyz.rbegin(), xyz.rend());

    for(int i=0; i<k; i++) cout << xyz[i] << endl;
    return 0;
}