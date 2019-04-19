#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define SZ(x) ((int)(x).size())
#define F first
#define S second
using namespace std;
typedef long long ll;


int main(){
    int n;
    string s;
    cin >> n >> s;
    int r = 0, b = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'R') r++;
        else b++;
    }
    if(r > b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}