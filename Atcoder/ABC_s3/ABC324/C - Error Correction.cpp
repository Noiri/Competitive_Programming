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
    string t;
    cin >> n >> t;

    vector<int> ans;

    rep(i, n){
        string s;
        cin >> s;

        if(t == s){
            ans.push_back(i+1);
        }
        else if(t.size()-1 == s.size()){
            int d = 0;
            rep(j, t.size()){
                if(j - d >= 0 && t[j] != s[j-d]) d++;
            }
            if(d <= 1) ans.push_back(i+1);
        }
        else if(t.size()+1 == s.size()){
            int d = 0;
            rep(j, s.size()){
                if(j - d >= 0 && t[j-d] != s[j]) d++;
            }
            if(d <= 1) ans.push_back(i+1);
        }
        else if(t.size() == s.size()){
            int d = 0;
            rep(j, s.size()) d += (t[j] != s[j]);
            if(d == 1) ans.push_back(i+1);
        }
    }

    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans[i] << " ";
    cout << endl;
}