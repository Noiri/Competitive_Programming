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
    int m;
    cin >> m;
    vector<int> d(m);
    rep(i, m) cin >> d[i];

    int sum = 0;
    rep(i, m) sum += d[i];

    int day = 0;
    rep(i, m){
        rep(j, d[i]){
            day++;
            if(day == (sum+1)/2){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
}