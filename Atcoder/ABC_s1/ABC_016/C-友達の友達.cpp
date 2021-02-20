#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1; i<=n; i++){
        set<int> s;
        for(int j=0; j<v[i].size(); j++){
            for(int k=0; k<v[v[i][j]].size(); k++) s.insert(v[v[i][j]][k]);
        }
        int ans = s.size();
        for(int j=0; j<v[i].size(); j++){
            if(s.find(v[i][j]) != s.end()) ans--;
        }
        if(s.find(i) != s.end()) ans--;
        cout << ans << endl;
    }
    return 0;
}