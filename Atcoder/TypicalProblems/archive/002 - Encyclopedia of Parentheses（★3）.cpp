#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> ans;

    for(int bit=0; bit<(1<<N); bit++){
        string now = "";
        rep(i, N){
            if((bit >> i) & 1) now += "(";
            else now += ")";
        }
        int balance = 0;
        for(auto c: now){
            balance += ((c == '(') ? 1 : -1);
            if(balance < 0) break;
        } 
        if(balance == 0) ans.push_back(now);
    }

    sort(all(ans));
    for(auto s: ans) cout << s << endl;
}