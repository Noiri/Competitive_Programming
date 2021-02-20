#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll h, w;
    cin >> h >> w;
    ll ans = 0;
    if(h == 1 && w == 1) ans = 1LL;
    else if(h == 1 || w == 1) ans = max(h, w) - 2LL;
    else ans = (h-2LL) * (w-2LL);
    cout << ans << endl;
    return 0;
}