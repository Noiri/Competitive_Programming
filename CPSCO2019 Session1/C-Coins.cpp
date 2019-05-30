#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n), a(n);
    for(int i=0; i<k; i++) v[n-i-1] = 1;
    for(int i=0; i<n; i++) cin >> a[i];

    int ans = 1e9;

    do {
        int sum = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 1) sum += a[i];
        }

        string val = to_string(sum);
        int cnt = 0;
        for(int i=0; i<val.size(); i++){
            int bit = val[i] - '0';
            cnt += bit%5 + bit/5;
        }

        ans = min(ans, cnt);
    } while(next_permutation(v.begin(), v.end()));

    cout << ans << endl;
}