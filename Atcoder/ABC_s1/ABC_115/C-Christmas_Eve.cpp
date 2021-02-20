#include <bits/stdc++.h>
using namespace std;
const int LIM = 1e5;

int N, K;
int h[LIM];

int main(){
    cin >> N >> K;
    for(int i=0; i<N; i++) cin >> h[i];
    sort(h, h+N);

    int ans = 1e9;
    for(int i=0; i<N-K+1; i++){
        ans = min(ans, h[i+K-1] - h[i]);
    }

    cout << ans << endl;
}