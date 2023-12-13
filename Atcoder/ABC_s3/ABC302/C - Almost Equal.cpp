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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<int> order(n);
    rep(i, n) order[i] = i;

    bool ok = false;
    do{
        bool ng = false;
        rep(i, n-1){
            int cnt = 0;
            rep(j, m){
                cnt += (s[order[i]][j] != s[order[i+1]][j]);
            }
            if(cnt > 1) ng = true;
        }
        if(!ng) ok = true;
    }while(next_permutation(all(order)));

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}