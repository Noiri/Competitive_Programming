#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<10; i++){
        string s = to_string(i);
        int num = stoi(s+s+s);
        if(num >= n){
            cout << num << endl;
            return 0;
        }
    }
}
