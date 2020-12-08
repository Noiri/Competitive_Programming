#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v;
    for(int bit=0; bit<(1 << n); bit++){
        vector<int> t;
        for(int i=0; i<n; i++){
            if(bit & (1<<i)) t.push_back(1);
            else t.push_back(0);
        }
        v.push_back(t);
    }

    vector<vector<int>> s(m);
    for(int i=0; i<m; i++){
        int k;
        cin >> k;
        for(int j=0; j<k; j++){
            int sw; cin >> sw;
            s[i].push_back(sw);
        }
    }

    vector<int> p(m);
    for(int i=0; i<m; i++) cin >> p[i];


    int ans = 0;
    for(int i=0; i<v.size(); i++){
        int cnt = 0;
        for(int j=0; j<m; j++){
            int tmp = 0;
            for(int l=0; l<s[j].size(); l++){
                if(v[i][s[j][l]-1] == 1) tmp++;
            }
            if(tmp%2 == p[j]) cnt++;
        }
        if(cnt == m) ans++;
    }
    cout << ans << endl;
    
}
