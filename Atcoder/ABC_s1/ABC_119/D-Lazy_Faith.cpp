#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a, b, q;
    cin >> a >> b >> q;
    vector<ll> s(a+2), t(b+2);

    s[0] = -1e15;
    s[a+1] = 1e15;
    t[0] = -1e15;
    t[b+1] = 1e15;

    for(int i=1; i<=a; i++) cin >> s[i];
    for(int i=1; i<=b; i++) cin >> t[i];

    for(int i=0; i<q; i++){
        ll x;
        cin >> x;

        auto S = upper_bound(s.begin(), s.end(), x);
        auto T = upper_bound(t.begin(), t.end(), x);

        ll sr = *S - x, sl = *(S-1) - x;
        ll tr = *T - x, tl = *(T-1) - x;

        ll ans = min({abs(sl) + abs(tl - sl), abs(tl) + abs(tl - sl), abs(sr) + abs(sr - tr), abs(tr) + abs(sr - tr), abs(2*sl) + abs(tr), abs(2*sr) + abs(tl), abs(2*tl) + abs(sr), abs(2*tr) + abs(sl)});

        cout << ans << endl;
    }
    return 0;
}