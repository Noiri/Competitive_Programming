#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int main(){
    int w, n;
    cin >> w >> n;
    vector<int> v(w+1);
    rep(i, n){
        int l, r;
        cin >> l >> r;
        v[l-1]++;
        v[r]--;
    }
    rep(i, w){
        cout << v[i] << endl;
        v[i+1] += v[i];
    }

}
