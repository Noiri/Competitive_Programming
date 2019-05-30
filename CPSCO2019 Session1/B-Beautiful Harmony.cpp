#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    vector<int> v(26);
    for(char c: s) v[c-'a']++;
    
    bool flag = true;
    int cnt = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] != 0 && cnt == 0) cnt = v[i];
        if(cnt != v[i] && v[i] != 0) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}