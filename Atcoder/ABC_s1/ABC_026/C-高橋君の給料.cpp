#include <bits/stdc++.h>
using namespace std;

struct member {
    int p;
    int c;
    int pay;
};

int main(){
    int n;
    cin >> n;
    vector<member> v(n+1);
    for(int i=2; i<=n; i++){
        int boss;
        cin >> boss;
        v[i].p = boss;
        v[boss].c = i;
    }

    for(int i=1; i<=n; i++){
        if(v[i].c == 0) v[i].pay = 1;
    }

    while(v[1].pay == 0){
        for(int i=1; i<=n; i++){
            bool flag = true;
            if(v[i].pay == 0 && v[v[i].c].pay != 0){
                int mi = 1e9;
                int ma = 0;
                for(int j=1; j<=n; j++){
                    if(v[j].p == i){
                        if(v[j].pay == 0) flag = false;
                        ma = max(ma, v[j].pay);
                        mi = min(mi, v[j].pay);
                    }
                }
                if(flag == false) continue;
                else v[i].pay = ma + mi + 1;
            }
        }
    }
    
    cout << v[1].pay << endl;
    return 0;
}