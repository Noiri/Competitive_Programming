#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int lim = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        int h;
        cin >> h;
        lim = max(lim, h);
        if(lim <= h) ans++;
    }
    cout << ans << endl;
    return 0;
}