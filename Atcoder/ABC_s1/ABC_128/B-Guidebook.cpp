#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> v(n), ind(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
        v[i].second = -1 * v[i].second;
        ind[i].first = v[i].first;
        ind[i].second = v[i].second;
    }
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i].first == ind[j].first && v[i].second == ind[j].second) cout << j + 1 << endl;
        }
    }

}
