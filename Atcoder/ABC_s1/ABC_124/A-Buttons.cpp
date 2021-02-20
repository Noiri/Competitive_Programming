#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if(a > b){
        ans += a;
        a--;
    }
    else{ 
        ans += b;
        b--;
    }
    cout << ans + max(a,b) << endl;
    return 0;
}