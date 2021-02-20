#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main(){
    ll n, m;
    cin >> n >> m;
    priority_queue<P> q;
    for(int i=0; i<n; i++){
        ll A;
        cin >> A;
        q.push(P{A, 1});
    }
    for(int i=0; i<m; i++){
        ll B, C;
        cin >> B >> C;
        q.push(P{C, B});
    }

    ll ans = 0;
    while(n > 0){
        P p = q.top();
        q.pop();
        if(n >= p.second) ans += (p.first * p.second);
        else ans += (p.first * n);
        n -= p.second;
    }
    cout << ans << endl;
}