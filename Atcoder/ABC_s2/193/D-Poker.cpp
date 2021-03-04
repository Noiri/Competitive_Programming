#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int calc_point(string s, int x){
    int ret = 0;
    vector<int> count(10);
    count[x] = 1;
    rep(i, s.size()-1) count[s[i] - '0']++;
    for(int i=1; i<=9; i++){
        ret += i * pow(10, count[i]);
    } 
    return ret;
}

int main(){
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;

    vector<double> card_n(10, k);
    rep(i, s.size()-1) card_n[s[i]-'0']--;
    rep(i, t.size()-1) card_n[t[i]-'0']--;

    double ans = 0;

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(calc_point(s, i) > calc_point(t, j)){
                if(i == j){
                    if(card_n[i] <= 1) continue;
                    ans += (card_n[i] / (double)(k * 9 - 8)) * ((card_n[i]-1) / (double)(k * 9 - 9));
                }
                else{
                    if(card_n[i] <= 0 || card_n[j] <= 0) continue;
                    ans += (card_n[i] / (double)(k * 9 - 8)) * (card_n[j] / (double)(k * 9 - 9));
                }
            }
        }
    }

    cout << fixed << setprecision(9) << ans << endl;
}