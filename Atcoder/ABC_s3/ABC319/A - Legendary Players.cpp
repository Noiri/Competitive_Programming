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
    string s;
    cin >> s;

    int ans = 0;
    if(s == "tourist") ans = 3858;
    if(s == "ksun48") ans = 3679;
    if(s == "Benq") ans = 3658;
    if(s == "Um_nik") ans = 3648;
    if(s == "apiad") ans = 3638;
    if(s == "Stonefeang") ans = 3630;
    if(s == "ecnerwala") ans = 3613;
    if(s == "mnbvmar") ans = 3555;
    if(s == "newbiedmy") ans = 3516;
    if(s == "semiexp") ans = 3481;

    cout << ans << endl;
}