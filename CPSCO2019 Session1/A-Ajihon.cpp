#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, a;
    cin >> n >> a;
    int mi = a/3+(a%3!=0);
    int ma = min(n/3, a);
    cout << mi << " " << ma << endl;
}