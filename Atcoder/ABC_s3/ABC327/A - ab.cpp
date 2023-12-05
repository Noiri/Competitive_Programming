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
    string s;
    cin >> n >> s;

    rep(i, n-1){
        if(s[i] == 'a' && s[i+1] == 'b'){
            cout << "Yes" << endl;
            return 0;
        }
        else if(s[i] == 'b' && s[i+1] == 'a'){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}