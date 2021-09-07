#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

using ll = long long;

vector<pair<ll, ll>> prime_factorize(ll n){
    vector<pair<ll, ll>> res;
    for(ll p=2; p*p<=n; p++){
        if(n % p != 0) continue;
        int count = 0;
        while(n % p == 0){
            n /= p;
            count++;
        }
        res.push_back(make_pair(p, count));
    }
    if(n != 1) res.push_back(make_pair(n, 1));
    return res;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    rep(i, n) cin >> v[i];

    vector<int> ans(1e5+1);
    rep(i, n){
        auto prime = prime_factorize(v[i]);
        for(auto p: prime){
            if(ans[p.first]) continue;
            int x = 1;
            while(x * p.first <= m){
                ans[x * p.first] = 1;
                x++;
            }
        }
    }

    int cnt = 0;
    for(int i=1; i<=m; i++) cnt += (!ans[i]);
    cout << cnt << endl;
    for(int i=1; i<=m; i++){
        if(!ans[i]) cout << i << endl;
    }
}