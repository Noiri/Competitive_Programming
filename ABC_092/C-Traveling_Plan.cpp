#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(0);
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += abs(v[i+1] - v[i]);
    }
    
    for(int i=1; i<=n; i++){
        int df = abs(v[i] - v[i-1]) + abs(v[i+1] - v[i]) - abs(v[i+1] - v[i-1]);
        cout << sum - df << endl;
    }
    return 0;
}