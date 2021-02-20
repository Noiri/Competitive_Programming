#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<char> v(k);
    for(int i=0; i<k; i++) cin >> v[i];

    for(int i=n; i<1000000; i++){
        string s = to_string(i);
        bool flag = false;
        for(int j=0; j<s.size(); j++){
            for(int l=0; l<k; l++) if(s[j] == v[l]) flag = true;
        }
        if(!flag){
            cout << i << endl;
            return 0;
        }
    }
}