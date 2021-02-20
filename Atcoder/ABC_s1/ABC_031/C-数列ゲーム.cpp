#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<pair<int, pair<int, int>>> ans;

    int t = 0;
    int a = 0;
    for(int l=0; l<n; l++){
        int tt = 0;
        int aa = 0;
        for(int r=l+1; r<n; r++){
            if(r%2 == 1){
                tt += v[r];
                //cout << "t = " << v[r] << endl;
                ans.push_back(make_pair(-aa, make_pair(r, -tt)));
            }
            else{
                aa += v[r];
                //cout << "a = " << v[r] << endl;
                ans.push_back(make_pair(-aa, make_pair(r, -tt)));
            }
        }
    }
    //cout << a << endl;
    //cout << t << endl;
    sort(ans.begin(), ans.end());
    cout << "ans" << endl;
    for(int i=0; i<ans.size(); i++) cout << -ans[i].first << " " << -ans[i].second.second << endl;
}