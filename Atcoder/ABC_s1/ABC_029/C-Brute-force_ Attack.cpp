#include <bits/stdc++.h>
using namespace std;

int N;
string dict[] = {"a", "b", "c"};
vector<string> ans;

void dfs(int n, string res){
    if(n == N) {
        ans.push_back(res);
        return;
    }
    for(int i=0; i<3; i++){
        dfs(n+1, res+dict[i]);
    }
}

int main(){
    cin >> N;
    dfs(0, "");
    sort(ans.begin(), ans.end());
    for(string x: ans) cout << x << endl;
    return 0;
}