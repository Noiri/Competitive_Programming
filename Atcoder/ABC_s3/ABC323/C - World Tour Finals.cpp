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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m) cin >> a[i];
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<int> point(n);
    int M = 0;
    rep(i, n){
        point[i] += (i + 1);
        rep(j, m){
            if(s[i][j] == 'o') point[i] += a[j];
        }
        chmax(M, point[i]);
    }

    rep(i, n){
        vector<pair<int, char>> tmp(m);
        rep(j, m) tmp.push_back({a[j], s[i][j]});
        sort(rall(tmp));
        int cnt = 0;
        int p = point[i];
        rep(j, m){
            if(p < M && tmp[j].second == 'x'){
                p += tmp[j].first;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

}