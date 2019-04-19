#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long cnt = 0;

    if(k == 0){
        cout << n*n << endl;
        return 0;
    }

    for(long long b=1; b<=n; b++){
        long long p = n/b;
        long long r = n%b;
        cnt += p*max(0LL, b-k) + max(0LL, r-k+1LL);
    }
    cout << cnt << endl;
    return 0;
}