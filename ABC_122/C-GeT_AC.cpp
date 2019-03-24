#include <bits/stdc++.h>
using namespace std;

int a[1000001];

int main(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    for(int i=1; i<n; i++){
        bool flag = false;
        if(s[i-1] == 'A' && s[i] == 'C'){
            a[i-1]++;
            a[i]++;
        }
        a[i+1] = a[i];
    }

    if(s.size() == 3){
        a[0] = 0; a[1] = 0; a[2] = 0;
        if(s[0] == 'A' && s[1] == 'C'){
            a[0]++;
            a[1]++;
        }
        if(s[1] == 'A' && s[2] == 'C'){
            a[1]++;
            a[2]++;
        }
    }

    for(int i=0; i<q; i++){
        int l, r;
        cin >> l >> r;
        // substr = 1
        if(l == r){
            cout << 0 << endl;
            continue;
        }
        //substr = 2
        if(r-l == 1 && s[l-1] == 'A' && s[r-1] == 'C'){
            cout << 1 << endl;
            continue;
        }
        else if(r - l == 1){
            cout << 0 << endl;
            continue;
        }

        //otherwise
        int ans = 0;
        string t = s.substr(l-1, r - l+1);

        if(t[0] == 'A' && t[1] == 'C') ans = 1;
        ans += (a[r-1] - a[l-1]);
        if(t[t.size()-1] == 'A' && (r+1) <= s.size() && s.substr(r-1, 2) == "AC") ans--;

        cout << ans << endl;

    }
}