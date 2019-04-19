#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(i%2 == 0) v.push_back(a);
        else v.insert(v.begin(), a);
    }
    if(n%2 == 1) reverse(v.begin(), v.end());
    for(int i=0; i<n; i++){
        if(i == n-1) cout << v[i] << endl;
        else cout << v[i] << " ";
    }
    return 0;
}