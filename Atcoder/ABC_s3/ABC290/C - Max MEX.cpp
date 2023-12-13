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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    rep(i, n){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    vector<int> a;
    for(auto x: mp) a.push_back(x.first);
    //rep(i, a.size()) cout << a[i] << ", "; cout << endl;

    int idx = 0;
    rep(i, a.size()-1){
        if(a[i+1] - a[i] != 1){
            if(idx == n) cout << 0 << endl;
            else{
                int r = 0;
                for(auto p: mp){
                    if(p.first != a[i+1]) r += p.second;
                }
                if(idx-1+r >= k) cout << idx << endl;
                else cout << 0 << endl;
            }
            return 0;
        }
        else if(i < k){
            idx++;
            mp[a[i]]--;
        }
    }
}