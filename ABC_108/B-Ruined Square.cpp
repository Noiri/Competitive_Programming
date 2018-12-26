#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int X = x1-x2, Y = y1-y2;
    int len = sqrt(X*X + Y*Y);
    cout << x2-X << " " << y2-Y << " " << x1-X << " " << y1-Y << endl;
    return 0;
}