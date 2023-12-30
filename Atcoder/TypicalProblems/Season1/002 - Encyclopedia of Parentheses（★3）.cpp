#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;


int main(){
    int n;
    cin >> n;
    if(n%2 == 1){
        cout << "" << endl;
        return 0;
    }

    vector<string> ans;

    for(int bit = 0; bit < (1 << n); bit++){
        string p = "";
        rep(i, n){
            if(bit & (1 << i)) p += "(";
            else p += ")";
        }
        bool ok = true;
        int cnt = 0;
        rep(i, n){
            if(p[i] == '(') cnt++;
            else cnt--;
            if(cnt < 0) ok = false;
        }
        if(ok && cnt == 0) ans.push_back(p);
    }

    sort(all(ans));
    rep(i, ans.size()) cout << ans[i] << endl;
}