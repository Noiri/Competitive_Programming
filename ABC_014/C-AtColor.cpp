#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(1000000+2);
    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=0; i<v.size()-1; i++) v[i+1] += v[i];
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}