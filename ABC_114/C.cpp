#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<ll> v;
    ll n;
    cin >> n;
    
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    for(int i=0; i<9; i++){
        int last = v.size();
        for(int j=0; j<last; j++){
            ll a = v[j] * 10;
            v.push_back(a+3);
            v.push_back(a+5);
            v.push_back(a+7);
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
    }
    int cnt = 0;
    auto N = string::npos;
    for(int i=0; i<v.size(); i++){
        if(v[i] > n) break;
        string s = to_string(v[i]);
        if(s.find("3") != N && s.find("5") != N && s.find("7") != N) cnt++;
    }
    cout << cnt << endl;
    return 0;
}