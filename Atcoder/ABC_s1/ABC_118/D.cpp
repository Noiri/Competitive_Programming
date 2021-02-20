#include <bits/stdc++.h>
using namespace std;

int table[] = {0, 2,5,5,4,5,6,3,7,6};

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m), cost(m);
    for(int i=0; i<m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int cm = 10;
    for(int i=0; i<m; i++){
        cost[i] = table[v[i]];
        cm = min(cm, cost[i]);
    }

    vector<vector<int>> s;
    for(int bit=0; bit<(1 << m); bit++){
        vector<int> tmp;
        for(int i=0; i<n; i++){
            int Sum = 0;
            if(bit & (1 << i)){
                if(cost[i] != cm){
                    Sum += cost[i];
                    tmp.push_back(cost[i]);
                } 
            }
            if(tmp.size() != 0) s.push_back(tmp);
        }
    }
    for(auto vv: s){
        for(auto x: vv) cout << x << " ";
        cout << endl;
    }

}