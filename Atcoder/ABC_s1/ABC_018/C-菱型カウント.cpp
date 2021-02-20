#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

P m[501][501];

int main(){
    int r, c, k;
    cin >> r >> c >> k;
    vector<string> v(r);
    for(int i=0; i<r; i++) cin >> v[i];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            for(int y=i; y>=0; y--){
                if(v[y][j] == 'o') m[i][j].first++;
                else break;
            }
            for(int y=i; y<r; y++){
                if(v[y][j] == 'o') m[i][j].second++;
                else break;
            }
        }
    }

    vector<int> u, ind;
    for(int x=-k+1; x<k; x++){
        u.push_back(abs(k-abs(x)));
        ind.push_back(x);
    }

    int ans = 0;
    for(int i=k-1; i<=r-k; i++){
        for(int j=k-1; j<=c-k; j++){
            bool flag = true;
            for(int x=0; x<ind.size(); x++){
                if(m[i][j+ind[x]].first < u[x] || m[i][j+ind[x]].second < u[x]) flag = false;
            }
            if(flag) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}