#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        a[tmp-1]++;  a[tmp]++; a[tmp+1]++;
    }
    cout << *max_element(begin(a), end(a)) << endl;
    return 0;
}