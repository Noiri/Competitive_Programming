#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n+2);
    for(int i=1; i<=n; i++) cin >> v[i];
    int sum = 0;
    for(int i=0; i<=n; i++) sum += abs(v[i+1] - v[i]);
    for(int i=1; i<=n; i++){
        cout << sum + abs(v[i+1] - v[i-1]) - abs(v[i-1] - v[i]) - abs(v[i+1] - v[i]) << endl;
    }
    return 0;
}