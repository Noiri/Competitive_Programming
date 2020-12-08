#include <bits/stdc++.h>
#define rep(i,n,m) for(int (i)=0;(i)<(m);(i)++)
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());
    int sum = 0;
    rep(i, 0, n-1) sum += v[i];
    if(sum > v[n-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}