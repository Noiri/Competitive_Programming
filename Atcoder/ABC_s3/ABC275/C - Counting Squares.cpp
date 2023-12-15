#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int dist(int x1, int x2, int y1, int y2){
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main(){
    vector<string> m(9);
    rep(i, 9) cin >> m[i];

    vector<pair<int, int>> p;
    rep(i, 9){
        rep(j, 9){
            if(m[i][j] == '#') p.push_back({j, i});
        }
    }

    int ans = 0;
    rep(i, p.size()){
        rep(j, p.size()){
            rep(k, p.size()){
                rep(l, p.size()){
                    if(i == j || j == k || k == l || l == i) continue;
                    int d1 = dist(p[i].first, p[j].first, p[i].second, p[j].second);
                    int d2 = dist(p[i].first, p[k].first, p[i].second, p[k].second);
                    int d3 = dist(p[k].first, p[l].first, p[k].second, p[l].second);
                    int d4 = dist(p[j].first, p[l].first, p[j].second, p[l].second);
                    if(d1 == d2 && d2 == d3 && d3 == d4 && d4 == d1){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans/8 << endl;
}