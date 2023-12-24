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

    map<int, int> depth;
    depth[1] = 0;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        depth[2*i] = depth[a]+1;
        depth[2*i + 1] = depth[a]+1;
    }

    for(auto x: depth){
        cout << x.second << endl;
    }

}