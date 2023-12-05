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
    int m[9][9];
    rep(i, 9)rep(j, 9) cin >> m[i][j];

    bool flag = true;
    rep(i, 9){
        set<int> st;
        rep(j, 9){
            st.insert(m[i][j]);
        }
        if(st.size() != 9) flag = false;
    }

    rep(j, 9){
        set<int> st;
        rep(i, 9){
            st.insert(m[i][j]);
        }
        if(st.size() != 9) flag = false;
    }

    for(int i = 0; i < 9; i += 3){
        for(int j = 0; j < 9; j += 3){
            set<int> st;
            rep(k, 3){
                rep(l, 3){
                    st.insert(m[i+k][j+l]);
                }
            }
            if(st.size() != 9) flag = false;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}