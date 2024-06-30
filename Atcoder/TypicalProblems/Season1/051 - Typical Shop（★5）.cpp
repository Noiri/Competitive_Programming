#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

ll n, k, p;

vector<vector<ll>> bit_search(vector<ll> &vec){
    vector<vector<ll>> res(100, vector<ll>());
    for(int bit = 0; bit < (1 << vec.size()); bit++){
        int cnt = 0;
        ll sum = 0;
        rep(i, vec.size()){
            if((bit >> i) & 1){
                cnt++;
                sum += vec[i];
            }
        }
        if(cnt <= k && sum <= p) res[cnt].push_back(sum);
    }
    return res;
}

//key以下のxの個数
ll LessThanOrEqualTo_X(vector<ll> &v, ll key){
    return distance(v.begin(), upper_bound(all(v), key));
}

int main(){
    cin >> n >> k >> p;
    vector<ll> head(n/2), tail(n/2 + n%2);
    rep(i, head.size()) cin >> head[i];
    rep(i, tail.size()) cin >> tail[i];

    vector<vector<ll>> head_sum = bit_search(head);
    rep(i, head_sum.size()) sort(all(head_sum[i]));

    vector<vector<ll>> tail_sum = bit_search(tail);
    rep(i, tail_sum.size()) sort(all(tail_sum[i]));

    ll ans = 0;
    for(int i = 0; i <= k; i++){
        rep(j, head_sum[i].size()){
            ll diff = p - head_sum[i][j];
            ll pos = LessThanOrEqualTo_X(tail_sum[k-i], diff);
            ans += pos;
        }
    }
    
    cout << ans << endl;
}