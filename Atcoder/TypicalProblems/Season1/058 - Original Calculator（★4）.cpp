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
    ll x, k;
    cin >> x >> k;

    vector<int> memo(100005);
    ll loop = 0;
    rep(i, min(100005LL, k)){
        if(k > 100000 && memo[x]){
            loop = i - memo[x] + 1;
            break;
        }
        else memo[x] = i+1;

        string s = to_string(x);
        ll y = 0;
        rep(j, s.size()) y += (s[j] - '0');
        ll z = (x + y) % 100000;
        x = z;
    }

    if(k <= 100000){
        cout << x << endl;
        return 0;
    }

    k -= memo[x];
    k %= loop;

    rep(i, k+1){
        string s = to_string(x);
        ll y = 0;
        rep(j, s.size()) y += (s[j] - '0');
        ll z = (x + y) % 100000;
        x = z;
    }

    cout << x << endl;
}