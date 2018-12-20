#include <bits/stdc++.h>
using namespace std;
const int lim = int(1e5 + 1);

typedef pair<int, int> P;

//個数、数字
vector<P> odd(lim), eve(lim);

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(i%2 == 0){
            eve[num].first++;
            eve[num].second = num;
        }
        else{
            odd[num].first++;
            odd[num].second = num;
        }
    }
    
    //降順ソート
    sort(eve.rbegin(),eve.rend());
    sort(odd.rbegin(),odd.rend());


    if(odd[0].second != eve[0].second) cout << (n/2 - odd[0].first) + (n/2 - eve[0].first) << endl;
    else cout << min((n/2 - eve[0].first) + (n/2 - odd[1].first), (n/2 - eve[1].first) + (n/2 - odd[0].first)) << endl;

    return 0;
}