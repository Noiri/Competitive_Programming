#include <bits/stdc++.h>
using namespace std;

int ind[200001];

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x, y;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1) ind[b]++;
        if(b == n) ind[a]++;
    }

    for(int i=1; i<=n; i++){
        if(ind[i] == 2){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}