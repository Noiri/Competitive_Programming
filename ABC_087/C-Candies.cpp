#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> top(n+1), bot(n+1);
    for(int i=1; i<=n; i++){
        cin >> top[i];
        top[i] += top[i-1];
    }
    for(int i=n;i>0; i--) cin >> bot[i];
    for(int i=1; i<=n; i++) bot[i] += bot[i-1];
    reverse(bot.begin(), bot.end());
    
    int ans = 0;
    for(int i=0; i<n; i++) ans = max(ans, top[i+1] + bot[i]);
    cout << ans << endl;
    return 0;
}