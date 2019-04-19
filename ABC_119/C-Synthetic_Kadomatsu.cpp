#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
int l[8];
int ans = 1e9;

//10minで書けてしまった

void dfs(int i, int x, int y, int z, int xn, int yn, int zn){
    if(i == n){
        int cost = 0;
        cost += (xn-1)*10;
        cost += (yn-1)*10;
        cost += (zn-1)*10;
        cost += (abs(a - x) + abs(b - y) + abs(c - z));
        if(xn == 0 || yn == 0 || zn == 0) cost = 1e9;
        ans = min(ans, cost);
        return;
    }

    dfs(i+1, x+l[i], y, z, xn+1, yn, zn);
    dfs(i+1, x, y+l[i], z, xn, yn+1, zn);
    dfs(i+1, x, y, z+l[i], xn, yn, zn+1);
    dfs(i+1, x, y, z, xn, yn, zn);
}

int main(){
    cin >> n >> a >> b >> c;
    for(int i=0; i<n; i++) cin >> l[i];
    dfs(0, 0, 0, 0, 0, 0, 0);
    cout << ans << endl;
    return 0;
}