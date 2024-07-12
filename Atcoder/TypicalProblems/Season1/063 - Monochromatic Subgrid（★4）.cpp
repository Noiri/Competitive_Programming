#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int m[9][10001];

int main(){
    int h, w;
    cin >> h >> w;

    rep(i, h)rep(j, w) cin >> m[i][j];

    int ans = 0;
    for(int bit = 0; bit < (1 << h); bit++){
        map<int, int> cnt;
        rep(i, w){
            int on = 0;
            int tmp = 0;
            set<int> st;
            rep(j, h){
                if((bit >> j) & 1){
                    st.insert(m[j][i]);
                    tmp = m[j][i];
                    on++;
                } 
            }
            if(st.size() == 1) cnt[tmp] += on;
        }
        for(auto p: cnt) chmax(ans, p.second);
    }

    cout << ans << endl;
}