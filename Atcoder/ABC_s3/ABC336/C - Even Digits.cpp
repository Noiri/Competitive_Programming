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

int main(){
    ll n;
    cin >> n;
    n--;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    string ans = "";
    while(n > 0){
        ans += to_string((n % 5));
        n /= 5;
    }
    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++){
        cout << 2 * (ans[i] - '0');
    }

    cout << endl;
}