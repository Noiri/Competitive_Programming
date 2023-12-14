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
    string s;
    cin >> s;

    vector<int> flag(n+1);
    int cnt = 0;
    rep(i, n){
        if(s[i] == '"' && cnt%2 == 0){
            flag[i]++;
            cnt++;
        } 
        else if(s[i] == '"' && cnt%2 == 1){
            flag[i+1]--;
            cnt++;
        } 
    }
    rep(i, n) flag[i+1] += flag[i];

    rep(i, n){
        if(flag[i] == 0 && s[i] == ',') cout << ".";
        else cout << s[i];
    }
    cout << endl;
}