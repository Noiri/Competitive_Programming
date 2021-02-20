#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> v;
    int now = 1;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == (char)('0' + now)) cnt++;
        else {
            v.push_back(cnt);
            now = 1 - now;
            cnt = 1;
        }
    }
    if(cnt != 0) v.push_back(cnt);

    if(v.size() % 2 == 0) v.push_back(0);

    int add = 2*k + 1;

    int ans = 0;
    
    int left = 0;
    int right = 0;
    int tmp = 0;
    for(int i=0; i<v.size(); i+=2){
        int NextLeft = i;
        int NextRight = min(i + add, (int)v.size());

        while(NextLeft > left){
            tmp -= v[left];
            left++;
        }

        while(NextRight > right){
            tmp += v[right];
            right++;
        }

        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}