#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];

    vector<vector<vector<int>>> ans(200);

    for(int bit=0; bit<(1<<min(n, 8)); bit++){
        int s = 0;
        vector<int> u;
        for(int i=0; i<min(n, 8); i++){
            if((bit >> i) & 1){
                s += (v[i] % 200);
                s %= 200;
                u.push_back(i+1);
            }
        }
        if(!u.empty()) ans[s].push_back(u);
    }

    
    rep(i, 200){
        if(ans[i].size() >= 2){
            cout << "Yes" << endl;
            cout << ans[i][0].size() << " ";
            for(auto x: ans[i][0]) cout << x << " "; cout << endl;

            cout << ans[i][1].size() << " ";
            for(auto y: ans[i][1]) cout << y << " "; cout << endl;

            return 0;
        }
    }

    cout << "No" << endl;
    
}