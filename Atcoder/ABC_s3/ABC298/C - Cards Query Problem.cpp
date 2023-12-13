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
    cin >> n >> q;

    int M = 2e5 + 1;
    vector<multiset<int>> box(M);
    vector<set<int>> num(M);
    
    rep(i, q){
        int query;
        cin >> query;
        if(query == 1){
            int card, to;
            cin >> card >> to;
            box[to].insert(card);
            num[card].insert(to);
        }
        else if(query == 2){
            int j;
            cin >> j;
            for(auto x: box[j]) cout << x << " ";
            cout << endl;
        }
        else if(query == 3){
            int j;
            cin >> j;
            for(auto x: num[j]) cout << x << " ";
            cout << endl;
        }
    }
}