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
    string s;
    cin >> s;

    rep(i, n+1){
        bool ng = false;
        int logo = i;
        int muji = m;
        rep(j, n){
            if(s[j] == '0'){
                logo = i;
                muji = m;
            }
            else if(s[j] == '1'){
                if(muji > 0) muji--;
                else if(logo > 0) logo--;
                else ng = true;
            }
            else{
                if(logo > 0) logo--;
                else ng = true;
            }
        }
        if(!ng){
            cout << i << endl;
            return 0;
        }
    }

}