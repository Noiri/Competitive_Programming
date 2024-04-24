#include <assert.h>
#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

using ll = long long;

ll repnit(int n){
    ll ret = 1;
    rep(i, n-1){
        ret *= 10;
        ret++;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;

    set<ll> st;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            for(int k = 0; k < 15; k++){
                st.insert(repnit(i) + repnit(j) + repnit(k));
            }
        }
    }

    vector<ll> v;
    for(auto x: st) v.push_back(x);

    cout << v[n-1] << endl;
}