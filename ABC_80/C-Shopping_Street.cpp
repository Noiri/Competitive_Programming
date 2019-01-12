#include <bits/stdc++.h>
using namespace std;

int f[101][11];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            int info;
            cin >> info;
            f[i][j] = info;
        }
    }

    int p[101][12] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<11; j++) cin >> p[i][j];
        }

    long long ans = -9999999999;

    for(int bit=1; bit < (1<<10); bit++){
        long long sub_ans = 0;
        vector<int> v;
        for(int i=0; i<10; i++){
            if(bit & (1<<i)) v.push_back(i);
        }
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<v.size(); j++){
                cnt += f[i][v[j]];
            }
            sub_ans += p[i][cnt];
        }
        ans = max(ans, sub_ans);
    }
    cout << ans << endl;
    return 0;

}