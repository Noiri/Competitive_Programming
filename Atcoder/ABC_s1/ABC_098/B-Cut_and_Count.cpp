#include <bits/stdc++.h>
using namespace std;


template<class T> bool exist(string s, T key){
    return (s.find(key) != string::npos);
}


int main(){
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    int ans = 0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        vector<int> l(26), r(26);
        for(int j=0; j<i; j++) l[s[j] - 'a']++;
        for(int j=i; j<n; j++) r[s[j] - 'a']++;
        for(int j=0; j<26; j++){
            if(l[j] != 0 && r[j] != 0) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}