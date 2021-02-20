#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++) cin >> d[i];
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());
    cout << d.size() << endl;
    return 0;
}