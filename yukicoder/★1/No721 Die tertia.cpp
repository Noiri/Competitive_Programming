#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

int C2I(char c){
    int ret = c - '0';
    return ret;
}

int main(){
    string yymmdd;
    cin >> yymmdd;
    int y = C2I(yymmdd[0]) * 1000 + C2I(yymmdd[1]) * 100 + C2I(yymmdd[2]) * 10 + C2I(yymmdd[3]);
    int m = C2I(yymmdd[5]) * 10 + C2I(yymmdd[6]);
    int d = C2I(yymmdd[8]) * 10 + C2I(yymmdd[9]);

    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 閏年を考慮
    if(y % 4 == 0 && !(y % 100 == 0 && y % 400 != 0)){
        days[1] = 29;
    }
    else{
        days[1] = 28;
    }

    d += 2;
    if(d > days[m-1]){
        d = d - days[m-1];
        m++;
    }
    if(m > 12){
        m = 1;
        y++;
    }

    cout << y << "/";
    if(m < 10) cout << "0";
    cout << m << "/";
    if(d < 10) cout << "0";
    cout << d << endl;
}