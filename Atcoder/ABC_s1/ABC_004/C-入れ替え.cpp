#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans = {1, 2, 3, 4, 5, 6};
    int n;
    cin >> n;
    n %= 30;
    for(int i=0; i<n; i++){
        int x = i % 5;
        int y = i % 5 + 1;
        ans[x] = ans[x] + ans[y];
        ans[y] = ans[x] - ans[y];
        ans[x] = ans[x] - ans[y];
    }
    for(auto x: ans) cout << x;
    cout << endl;
    return 0;
}