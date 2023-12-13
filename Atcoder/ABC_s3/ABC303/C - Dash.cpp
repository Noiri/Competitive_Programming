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
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<pair<int, int>> item;
    rep(i, m){
        int x, y;
        cin >> x >> y;
        item.insert({x, y});
    }

    int nx = 0, ny = 0;
    set<pair<int, int>> used;
    for(auto next: s){
        if(next == 'R') nx++;
        else if(next == 'L') nx--;
        else if(next == 'U') ny++;
        else if(next == 'D') ny--;
        h--;
        if(h < 0){
            cout << "No" << endl;
            return 0;
        }
        if(item.find({nx, ny}) != item.end() && used.find({nx, ny}) == used.end() && h < k){
            h = k;
            used.insert({nx, ny});
        }
    }

    cout << "Yes" << endl;
}