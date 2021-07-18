#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int main(){
    //input
    int N, L, K;
    cin >> N >> L >> K;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    //各ブロックの長さを計算
    vector<int> v;
    v.push_back(A[0]);
    rep(i, N-1) v.push_back(A[i+1] - A[i]);
    v.push_back(L - A[N-1]);

    //binary serch
    int ok = 0;
    int ng = L+1;
    while(abs(ng - ok) > 1){
        int mid = (ok + ng) / 2;
        //check
        bool isOK;
        int sum = 0;
        int count = 0; //block
        rep(i, N+1){
            if(sum + v[i] > mid){
                sum = 0;
                count++;
            }
            else{
                sum += v[i];
            }
        }
        isOK = (count >= K+1);

        //update
        if(isOK) ok = mid;
        else ng = mid;
    }

    cout << ok+1 << endl;
}