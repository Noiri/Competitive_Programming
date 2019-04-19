#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x), b(y), c(z);
    for(int i=0; i<x; i++) cin >> a[i];
    for(int i=0; i<y; i++) cin >> b[i];
    for(int i=0; i<z; i++) cin >> c[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    vector<ll> xv, yv, zv;

    int pos = 0;
    int xp = 1, yp = 1, zp = 1;
    xv.push_back(a[0]);
    yv.push_back(b[0]);
    zv.push_back(c[0]);
    while(pos <= k){
        if(xp == x-1){
            if(b[yp] < c[zp]){
                zv.push_back(c[zp]);
                zp++;
            }
            else if(b[yp] > c[zp]){
                yv.push_back(b[yp]);
                yp++;
            }
            else {
                zv.push_back(c[zp]);
                yv.push_back(b[yp]);
                zp++;
                yp++;
            }
        }
        else if(yp == y-1){
            if(a[xp] < c[zp]){
                zv.push_back(c[zp]);
                zp++;
            }
            else if(a[xp] > c[zp]){
                xv.push_back(a[xp]);
                xp++;
            }
            else {
                xv.push_back(a[xp]);
                zv.push_back(c[zp]);
                xp++;
                zp++;
            }
        }
        else if(zp == z-1){
            if(a[xp] < b[zp]){
                yv.push_back(b[yp]);
                zp++;
            }
            else if(a[xp] > b[zp]){
                xv.push_back(a[xp]);
                xp++;
            }
            else {
                xv.push_back(a[xp]);
                yv.push_back(b[yp]);
                xp++;
                yp++;
            }
        }
        else{
            if(a[xp] > b[yp] && a[xp] > c[zp]){
                xv.push_back(a[xp]);
                xp++;
            }
            else if(b[yp] > a[xp] && b[yp] > c[zp]){
                yv.push_back(b[yp]);
                yp++;
            }
            else if(c[zp] > b[yp] && c[zp] > a[xp]){
                zv.push_back(c[zp]);
                zp++;
            }
            else {
                xv.push_back(a[xp]);
                yv.push_back(b[yp]);
                zv.push_back(c[zp]);
                xp++;
                yp++;
                zp++;
            }
        }
        pos = xv.size() * yv.size() * zv.size();
    }

    vector<ll> ans;
    for(int i=0; i<xv.size(); i++){
        for(int j=0; j<yv.size(); j++){
            for(int k=0; k<zv.size(); k++){
                ans.push_back(xv[i] + yv[j] + zv[k]);
            }
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<k; i++) cout << ans[i] << endl;

    return 0;
}