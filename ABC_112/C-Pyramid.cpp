#include <bits/stdc++.h>
using namespace std;

struct data {
    int h, x, y;
    bool operator<(const data& another) const {
        if(h != another.h) return h < another.h;
        if(x != another.x) return x < another.x;
        return y < another.y;
        }
};

data a[101];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i].x >> a[i].y >> a[i].h;

    vector<data> v;
    for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            int temp = 0;
            for(int k=0; k<n; k++){
                temp += abs(a[k].x - i) + abs(a[k].y - j) + a[k].h;
            }
            v.push_back((data){temp/n, i, j});
            
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<5; i++) cout << "h:" << v[i].h << " x:" << v[i].x << " y:" << v[i].y << endl;

    return 0;
}