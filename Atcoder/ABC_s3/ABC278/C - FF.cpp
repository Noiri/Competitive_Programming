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
    int n, q;
    cin >> n >> q;

    map<int, set<int>> ff;
    rep(i, q){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1){
            ff[a].insert(b);
        }
        else if(t == 2){
            ff[a].erase(b);
        }
        else{
            if(ff[a].find(b) != ff[a].end() && ff[b].find(a) != ff[b].end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}