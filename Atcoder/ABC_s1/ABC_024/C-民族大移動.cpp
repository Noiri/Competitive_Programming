#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, k;
    cin >> n >> d >> k;
    vector<int> l(d), r(d);
    for(int i=0; i<d; i++) cin >> l[i] >> r[i];

    for(int i=0; i<k; i++){
        int ans = 0;
        int s, t;
        cin >> s >> t;
        for(int j=0; j<d; j++){
            ans++;
            if(l[j] <= s && s <= r[j]) {
                if(l[j] <= t && t <= r[j]) break;
                if(abs(l[j] - t) < abs(r[j] - t)) s = l[j];
                else s = r[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}