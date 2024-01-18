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
    int a, b;
    cin >> a >> b;

    if(a == 3 && b == 4) cout << "No" << endl;
    else if(a == 6 && b == 7) cout << "No" << endl;
    else if(b - a == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}