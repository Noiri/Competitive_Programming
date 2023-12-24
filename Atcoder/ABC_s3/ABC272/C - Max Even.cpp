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
    vector<int> even, odd;
    rep(i, n){
        int a;
        cin >> a;
        if(a%2 == 0) even.push_back(a);
        else odd.push_back(a);
    }
    sort(all(even));
    sort(all(odd));

    int ans = -1;
    if(even.size() >= 2) ans = even[even.size()-1] + even[even.size()-2];
    if(odd.size() >= 2) chmax(ans, odd[odd.size()-1] + odd[odd.size()-2]);

    cout << ans << endl;
}