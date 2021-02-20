#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k;
    cin >> s >> k;

    vector<string> ans;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<=k; j++){
            if(s.substr(i, j) == "") continue;
            ans.push_back(s.substr(i, j));
        }
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << ans[k-1] << endl;
    return 0;
}