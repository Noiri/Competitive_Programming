#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int mod(int x, int div){
    int rem = x % div;
    if(rem < 0) rem += div;
    return rem;
}

int main(){
    string crypted_str;
    cin >> crypted_str;
    for(int i = 0; i < crypted_str.size(); i++){
        char tmp = 'A' + mod((crypted_str[i] - 'A' - (i + 1)), 26);
        cout << tmp;
    }
    cout << endl;
}