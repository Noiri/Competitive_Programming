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
    int n, x;
    cin >> n >> x;
    vector<int> v(n-1);
    rep(i, n-1) cin >> v[i];

    rep(i, 101){
        vector<int> tmp = v;
        tmp.push_back(i);
        sort(all(tmp));
        int sum = 0;
        for(int j = 1; j < n - 1; j++) sum += tmp[j];
        if(sum >= x){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}