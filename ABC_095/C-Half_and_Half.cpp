#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int mi = min(x, y);
    int ans = min({a*x + b*y, mi*2*c + (x-mi)*a + (y-mi)*b, max(x,y)*2*c});
    cout << ans << endl;
    return 0;
}