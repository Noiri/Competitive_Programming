#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, x;
    cin >> n >> d >> x;
    int cnt = n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        int day = a + 1;
        while(day <= d){
            cnt++;
            day += a;
        }
    }
    cout << cnt + x << endl;
    return 0;
}