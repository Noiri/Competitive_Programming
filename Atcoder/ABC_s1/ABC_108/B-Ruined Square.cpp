#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int nx = x2;
    int ny = y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    for(int i=0; i<2; i++){
        swap(dx, dy);
        dx = -dx;
        nx += dx;
        ny += dy;
        if(i == 0) cout << nx << " " << ny << " ";
        else cout << nx << " " << ny << endl;
    }
    return 0;
}