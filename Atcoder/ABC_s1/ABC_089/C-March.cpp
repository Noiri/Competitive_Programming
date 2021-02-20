#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> march(5);
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s[0] == 'M') march[0]++;
        else if(s[0] == 'A')  march[1]++;
        else if(s[0] == 'R') march[2]++;
        else if(s[0] == 'C') march[3]++;
        else if(s[0] == 'H') march[4]++;
    }
    
    ll ans = 0;
    for(int bit=0; bit<(1<<5); bit++){
        vector<int> v;
        for(int i=0; i<5; i++){
            if(bit & (1<<i)) v.push_back(i);
        }
        if(v.size() == 3){
            ans += march[v[0]] * march[v[1]] * march[v[2]];
        }
    }
    cout << ans << endl;


    return 0;
}