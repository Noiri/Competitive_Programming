#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

// 約数列挙
vector<long long> calc_divisor(long long n) {
    vector<long long> res;
    for (long long i = 1LL; i*i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            long long j = n / i;
            if (j != i) res.push_back(j);
        }
    }
    sort(res.begin(), res.end());
    //sort(res.rbegin(), res.rend());
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> cnt(n+1);
    for(int i = 1; i <= n; i++){
        auto div = calc_divisor(i);
        cnt[i] = div.size();
    }

    ll ans = 0;
    for(int x = 1; x <= n-1; x++){
        int y = n - x;
        ans += cnt[x] * cnt[y];
    }
    cout << ans << endl;
}