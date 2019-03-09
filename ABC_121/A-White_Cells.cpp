#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int h , w;
    cin >> h >> w;
    cout << (H * W) - (h*W + w*H - w*h) << endl;
    return 0;
}