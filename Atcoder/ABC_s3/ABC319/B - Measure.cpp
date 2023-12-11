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
    for(int i = 0; i <= n; i++){
        bool exist = false;
        for(int j = 1; j <= 9; j++){
            if(n%j == 0 && i%(n/j) == 0 && !exist){
                cout << j;
                exist = true;
            }
        }
        if(!exist) cout << "-";
    }
    cout << endl;
}