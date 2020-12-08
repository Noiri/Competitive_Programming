#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n), cp(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        cp[i] = v[i];
    }
    sort(cp.begin(), cp.end());
    int c1 = cp[n/2-1], c2 = cp[n/2];
    for(int i=0; i<n; i++){
        if(v[i] <= c1) cout << c2 << endl;
        else cout << c1 << endl;
    }
    return 0;
}