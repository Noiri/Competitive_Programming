#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        m[a] += 1;
    }
    vector<P> v;
    for(auto p: m) v.push_back(p);
    sort(v.rbegin(), v.rend());
    long long x = 0, y = 0;
    for(int i=0; i<v.size(); i++){
        if(x != 0 && y != 0) break;
        if(v[i].second >= 4){
            if(x == 0) x = v[i].first;
            else y = v[i].first;
            v[i].second -= 2;
        }
        if(v[i].second >= 2){
            if(x == 0) x = v[i].first;
            else y = v[i].first;
        }
    }
    cout << (long long)(x*y) << endl;
    return 0;
}