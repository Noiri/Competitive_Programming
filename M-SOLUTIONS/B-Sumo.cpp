#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(char c: s) cnt += (c == 'o');
    if(cnt >= 8) cout << "YES" << endl;
    else if(cnt + (15 - s.size()) >= 8) cout << "YES" << endl;
    else cout << "NO" << endl;
}