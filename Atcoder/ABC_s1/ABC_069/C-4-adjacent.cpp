#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool ans = false;
    cin >> n;
    int div_2 = 0, div_4 = 0, others = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a%4 == 0) div_4++;
        else if(a%2 == 0) div_2++;
        else others++;
    }

    if(others == 0) ans = true;
    else if(div_4 >= others) ans = true;
    //div_4+1 == others + (div_2 == 1) としたところ最後のケースで通らなかった
    else if(div_4+1 == others && div_2 == 0) ans = true;

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}