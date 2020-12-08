#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    int n;
    cin >> n;
    vector<P> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    vector<int> ans(n);

    int b = 0;
    for(int i=1; i<n; i++){
        if(v[i-1].first != v[i].first) b++;
        ans[v[i].second] = b;
    }
    for(int x: ans) cout << x << endl;
    return 0;
}