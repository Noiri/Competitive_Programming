#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    int ans = 0;

    int x = 0;
    int y = 0;
    for(int i=0; i<s.size();i ++){
        if(i%2 == 0 && s[i] == '0') x++;
        else if(i%2 == 1 && s[i] == '1') y++;
    }

    int len = s.size();
    ans = min(x+y, len - x - y);
    cout << ans << endl;
    return 0;
}