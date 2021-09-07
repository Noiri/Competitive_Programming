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
    int l, q;
    cin >> l >> q;

    set<int> cutting_point;
    cutting_point.insert(0);
    cutting_point.insert(l);
    rep(i, q){
        int c, x;
        cin >> c >> x;
        if(c == 1){
            cutting_point.insert(x);
        }
        else if(c == 2){
            int left = *(--cutting_point.upper_bound(x));
            int right = *cutting_point.upper_bound(x);
            cout << right - left << endl;
        }
    }
}