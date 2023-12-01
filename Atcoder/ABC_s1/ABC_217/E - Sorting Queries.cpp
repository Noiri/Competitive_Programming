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
    int q;
    cin >> q;

    queue<int> v;
    priority_queue<int, vector<int>, greater<int>> u;

    rep(i, q){
        int c;
        cin >> c;
        
        if(c == 1){
            int x;
            cin >> x;
            v.push(x);
        }
        else if(c == 2){
            if(!u.empty()){
                cout << u.top() << endl;
                u.pop();
            }
            else if(!v.empty()){
                cout << v.front() << endl;
                v.pop();
            }
        }
        else {
            while(!v.empty()) {
                u.push(v.front());
                v.pop();
            }
        }
    }
}