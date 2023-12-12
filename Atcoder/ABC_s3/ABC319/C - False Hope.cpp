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
    vector<int> c(9);
    rep(i, 9) cin >> c[i];

    vector<tuple<int, int, int>> v{{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    vector<int> p;
    rep(i, 9) p.push_back(i);

    double all = 0, ok = 0;
    do {
        all++;
        bool ng = false;
        for(auto [x, y, z]: v) {
            if(c[x] == c[y] && max(p[x], p[y]) < p[z]) ng = true;
            else if(c[x] == c[z] && max(p[x], p[z]) < p[y]) ng = true;
            else if(c[y] == c[z] && max(p[y], p[z]) < p[x]) ng = true;
        }
        if(!ng) ok++;
    } while(next_permutation(all(p)));


    cout << setprecision(10) << ok / all << endl;
}