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
    int k;
    cin >> k;

    vector<ll> v;
    for(int bit = 1; bit < (1 << 10); bit++){
        string num = "";
        rep(i, 10){
            if(bit & (1 << i)){
                num = to_string(i) + num;
            }
        }
        v.push_back(stoll(num));
    }

    sort(all(v));
    cout << v[k] << endl;
}