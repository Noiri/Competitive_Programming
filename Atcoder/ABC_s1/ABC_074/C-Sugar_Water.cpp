#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<double> x, y;

    for(int i=0; i<=f; i++){
        for(int j=0; j<=f; j++){
            if(100*a*i + 100*b*j <= f) x.push_back(100*a*i + 100*b*j);
        }
    }

    for(int i=0; i<=f; i++){
        for(int j=0; j<=f; j++){
            if(c*i + d*j <= f) y.push_back(c*i + d*j);
        }
    }

    double ans = 0;
    int s = 0, w = 0;
    if(min(100*a, 100*b) <= f) w = min(100*a, 100*b);
    for(int i=0; i<x.size(); i++){
        for(int j=0; j<y.size(); j++){
            if(x[i] != 0 && y[j]/(x[i]+y[j]) <= e/(100+e) && x[i]+y[j] <= f){
                if(ans < y[j]/(x[i]+y[j])){
                    ans = y[j]/(x[i]+y[j]);
                    s = y[j];
                    w = x[i];
                }
            }
        }
    }
    cout << s+w << " " << s << endl;
    return 0;
}