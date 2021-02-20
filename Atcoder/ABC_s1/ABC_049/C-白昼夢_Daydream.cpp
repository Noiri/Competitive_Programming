#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    vector<string> v = {"dream", "dreamer", "erase", "eraser"};
    for(int i=0; i<v.size(); i++) reverse(v[i].begin(), v[i].end());
    string t = "";
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<v.size(); j++){
            int sz = v[j].size();
            if((s.substr(i, sz)).size() < v[j].size()) continue;
            if(s.substr(i, sz) == v[j]){
                i += sz - 1;
                t += v[j];
                break;
            }
        }
    }

    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}