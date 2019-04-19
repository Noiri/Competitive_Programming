#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    ll cnt = 0;
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
        if(i%2 == 0 && sum < 0){
            cnt += abs(sum) + 1;
            sum = 1;
        }
        else if(i%2 == 1 && sum > 0){
            cnt += abs(sum) + 1;
            sum = -1;
        }
        if(i%2 == 0 && sum == 0){
            sum = 1;
            cnt++;
        }
        else if(i%2 == 1 && sum == 0){
            sum = -1;
            cnt++;
        }
    }

    ll ans = cnt;
    sum = 0;
    cnt = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
        if(i%2 == 0 && sum > 0){
            cnt += abs(sum) + 1;
            sum = -1;
        }
        else if(i%2 == 1 && sum < 0){
            cnt += abs(sum) + 1;
            sum = 1;
        }
        if(i%2 == 0 && sum == 0){
            sum = -1;
            cnt++;
        }
        else if(i%2 == 1 && sum == 0){
            sum = 1;
            cnt++;
        }
    }
    ans = min(ans, cnt);
    cout << ans << endl;
    return 0;
}