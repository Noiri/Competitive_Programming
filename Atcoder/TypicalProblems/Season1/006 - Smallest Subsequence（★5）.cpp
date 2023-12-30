#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;

vector<vector<int>> calc_next(string s){
    int len = s.size();
    vector<vector<int>> res(len+1, vector<int>(26, len));

    // 後ろから見ていく
    for(int i = len-1; i >= 0; i--){
        // i番目よりも後ろの結果をコピー
        res[i] = res[i+1];
        // s[i]の結果を変更
        res[i][s[i] - 'a'] = i;
    }
    return res;
}

int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    auto next = calc_next(s);

    vector<char> ans;
    int now = -1;
    for(int i = 0; i < k; i++){
        for(char c = 'a'; c <= 'z'; c++){
            int pos = next[now + 1][c - 'a'];
            if(n - pos >= k - i){
                ans.push_back(c);
                now = pos;
                break;
            }
        }
    }

    for(auto x: ans) cout << x; cout << endl;
}