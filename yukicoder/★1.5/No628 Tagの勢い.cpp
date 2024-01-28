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
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        int image, m, score;
        cin >> image >> m >> score;
        for(int j = 0; j < m; j++){
            string tag;
            cin >> tag;
            mp[tag] -= score;
        }
    }

    vector<pair<int, string>> v;
    for(auto p: mp){
        v.push_back({p.second, p.first});
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < min(int(v.size()), 10); i++){
        cout << v[i].second << " " << -v[i].first << endl;
    }
}