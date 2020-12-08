#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(101);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i=a; i<b; i++) v[i]++;
    for(int i=c; i<d; i++) v[i]++;
    int ans = 0;
    for(int i=0; i<v.size(); i++) ans += (v[i] == 2);
    cout << ans << endl;
    return 0;
}