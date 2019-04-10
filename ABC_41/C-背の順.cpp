#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    int n;
    cin >> n;
    vector<P> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.rbegin(), v.rend());
    for(auto x: v) cout << x.second << endl;
    return 0;
}