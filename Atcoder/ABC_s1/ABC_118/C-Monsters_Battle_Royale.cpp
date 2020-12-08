#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool flag = true;
    int ans = 0;
    while(flag){
        int m = 1e9;
        for(int i=0; i<n; i++){
            if(a[i] > 0) m = min(m, a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i] != m) a[i] = a[i] % m;
        }
        int zero_cnt = 0;
        int m_cnt = 0;
        for(int i=0; i<n; i++){
            zero_cnt += (a[i] == 0);
            m_cnt += (a[i] == m);
        }
        if(zero_cnt == n - m_cnt){
            flag = false;
            ans = m;
        }
    }
    cout << ans << endl;
    return 0;
}