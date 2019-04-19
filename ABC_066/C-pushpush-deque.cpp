#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> deq;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(i%2 == (n-1)%2) deq.push_front(a);
        else deq.push_back(a);
    }
    for(int i=0; i<n; i++){
        if(i == n-1) cout << deq.at(i) << endl;
        else cout << deq.at(i) << " ";
    }
    return 0;
}