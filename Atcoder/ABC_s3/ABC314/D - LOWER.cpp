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
    int n, q;
    string s;
    cin >> n >> s >> q;

    int last = -1;
    vector<int> t(q), x(q);
    vector<char> c(q);
    rep(i, q){
        cin >> t[i] >> x[i] >> c[i];
        if(t[i] != 1) last = i;
    }

    rep(i, last){
        if(t[i] == 1) s[x[i]-1] = c[i];
    }
    if(t[last] == 2) rep(i, s.size()) s[i] = tolower(s[i]);
    if(t[last] == 3) rep(i, s.size()) s[i] = toupper(s[i]);
    for(int i = last+1; i < q; i++){
        s[x[i]-1] = c[i];
    }

    cout << s << endl;
}