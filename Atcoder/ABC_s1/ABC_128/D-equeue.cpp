#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0;

    for(int h=0; h<n; h++){
        vector<int> u;
        for(int i=0; i<h; i++) u.push_back(v[i]);
        for(int t=n; t>=0; t--){
            //左から取らないor右から取らない場合の実装に注意
            if((t == n && h < k) || h + (n-t-1) < k && h <= t){
                if(t != n) u.push_back(v[t]);
                int sum = 0;
                if(u.size() != 0){
                    for(int x:u) sum += x;
                    sort(u.begin(), u.end());
                    //操作できる残り回数が取った要素数よりも多い時の場合エスケープする。
                    for(int i=0; i<(k - (int)u.size()); i++) if(i < (int)u.size() && u[i] < 0) sum -= u[i];
                }
                ans = max(ans, sum);
            }
        }
    }
    cout << ans << endl;
}
