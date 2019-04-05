#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(8);
    int wild = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a <= 399) v[0]++;
        else if(a <= 799) v[1]++;
        else if(a <= 1199) v[2]++;
        else if(a <= 1599) v[3]++;
        else if(a <= 1999) v[4]++;
        else if(a <= 2399) v[5]++;
        else if(a <= 2799) v[6]++;
        else if(a <= 3199) v[7]++;
        else wild++;
    }
    int mi = 0;
    for(int i=0; i<v.size(); i++) mi += (v[i] != 0);
    int mx = mi + wild;
    if(mi == 0) mi = 1;
    cout << mi << " " << mx << endl;
    return 0;
}