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
    int Q;
    cin >> Q;

    vector<int> top, bot;
    rep(q, Q){
        int t, x;
        cin >> t >> x;
        if(t == 1) top.push_back(x);
        else if(t == 2) bot.push_back(x);
        else{
            if(top.size() >= x) cout << top[top.size() - x] << endl;
            else cout << bot[x - top.size() - 1] << endl;
        }
    }
}