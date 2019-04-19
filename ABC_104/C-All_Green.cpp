#include <bits/stdc++.h>
using namespace std;
int d, g;
vector<int> res;

int dfs(int x, int i, vector<int> v){
    if(x+v[i] >= g){
        res.push_back(x);
        return 0;
    }
    return dfs(x+v[i], i+1, v);
}

int main(){
    cin >> d >> g;
    vector<int> p(d), c(d);
    for(int i=0; i<d; i++) cin >> p[i] >> c[i];

    vector<int> cp(d);
    for(int i=0; i<d; i++) cp[i] = 100*(i+1)*p[i] + c[i];

    dfs(0, 0, cp);

    cout << "debug" << endl;
    for(int x:res) cout << x << endl;
}