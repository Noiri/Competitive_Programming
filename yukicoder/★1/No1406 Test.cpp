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
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
    } 

    int ans = 0;
    for(int point = 0; point <= 100; point++){
        sum += point;
        if(sum % n == 0) ans++;
        sum -= point;
    }

    cout << ans << endl;
}