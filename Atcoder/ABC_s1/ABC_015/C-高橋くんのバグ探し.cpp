#include <bits/stdc++.h>
using namespace std;

int n, k;
int m[5][5];

bool dfs(int q, int v){
    if(q == n){
        return (v == 0);
    }
    for(int i=0; i<k; i++){
            if(dfs(q+1, m[q][i] ^ v)) return true;
        }
    return false;
}

int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++) cin >> m[i][j];
    }

    if(dfs(0, 0)) cout << "Found" << endl;
    else cout << "Nothing" << endl;

    return 0;
}