#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int x[101], y[101], h[101];

int main() {
    int n;
    cin >> n;
    tuple<ll, ll, ll> G = make_tuple(-1, -1, -1);
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] >= 1) G = make_tuple(x[i], y[i], h[i]);
    }

    for(ll cx=0; cx<=100; cx++){
        for(ll cy=0; cy<=100; cy++){
            ll pred_h = get<2>(G) + abs(get<0>(G) - cx) + abs(get<1>(G) - cy);
            pred_h = max(pred_h, 0LL);
            bool flag = true;
            for(int i=0; i<n; i++){
                ll res = max(pred_h - abs(x[i] - cx) - abs(y[i] - cy), 0LL);
                if(h[i] != res) flag = false;
            }
            if(flag){
                cout << cx << " " << cy << " " << pred_h << endl;
                return 0;
            }
        }
    }
}