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

    vector<tuple<int, int, int>> v;
    for(int i = 0; i <= 21; i++){
        for(int j = 0; j <= 21; j++){
            for(int k = 0; k <= 21; k++){
                if(i + j + k <= n){
                    v.push_back({i, j, k});
                }
            }
        }
    }

    sort(all(v));

    for(auto tp: v){
        auto [x, y, z] = tp;
        cout << x << " " << y << " " << z << endl;
    }
}