#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, k;
    cin >> n >> k;

    double ans = 0;
    int lim = n;
    if(k <= n) lim = k-1;
    for(int i=1; i<=lim; i++){
        double base = 1;
        double x = 0;
        while(k > base * i){
            base *= 2;
            x++;
        }
        ans += 1/n * pow(0.5, x);
    }

    if(k <= n){
        ans += (n-k+1)/n;
    }

    cout << setprecision(12) << ans << endl;
}