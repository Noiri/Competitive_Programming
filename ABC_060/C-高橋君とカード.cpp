#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, a;
    cin >> n >> a;
    vector<int> x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
        x[i] -= a;
    }
    
    //for(int i=0; i<n; i++) cout << x[i] << endl;

    
}