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
    map<int, int> cnt;
    rep(i, n){
        int a;
        cin >> a;
        cnt[a]++;
    }

    vector<int> uq;
    for(auto x: cnt) uq.push_back(x.first);

    rep(i, n){
        if(uq.size()-1 < i) cout << 0 << endl;
        else cout << cnt[uq[uq.size()-i-1]] << endl;
    }
}