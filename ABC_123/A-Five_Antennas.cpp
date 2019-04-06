#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a, b, c, d, e, k;
    bool flag = false;
    cin >> a >> b >> c >> d >> e >> k;
    if(b - a > k) flag = true;
    else if(c - a > k) flag = true;
    else if(d - a > k) flag = true;
    else if(e - a > k) flag = true;
    else if(c - b > k) flag = true;
    else if(d - b > k) flag = true;
    else if(e - b > k) flag = true;
    else if(d - c > k) flag = true;
    else if(e - c > k) flag = true;
    else if(e - d > k) flag = true;

    if(flag == false) cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}