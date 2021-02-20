#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<ll> a(N);

    for(int i=0; i<N; i++) cin >> a[i];
    
    ll ans = 0;
    int r = 0;
    ll sum = 0;
    for(int l=0; l<N; l++){
        while(r < N && (sum + a[r]) == (sum ^ a[r])){
            sum += a[r];
            r++;
        }
        ans += r - l;
        if(l == r) r++;
        else sum -= a[l];
    }

    cout << ans << endl;
    return 0;
}