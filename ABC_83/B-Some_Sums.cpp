#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i=1; i<=n; i++){
        string s = to_string(i);
        int num = 0;
        for(int j=0; j<s.size(); j++){
            int tmp = s[j] - '0';
            num += tmp;
        }
        if(num <= b && a <= num) ans += i;
    }
    cout << ans << endl;
    return 0;
}