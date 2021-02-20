#include <bits/stdc++.h>
using namespace std;

int n, h[21600], cnt;

int main(){
    cin >> n;
    for(int i = 0;i < n;i++)cin >> h[i];
    int cnt = 0;
    while(true){
        bool allzero = true;
        for(int i = 0;i < n;i++)
        if(h[i] != 0)
        allzero = false;

        if(allzero)break;

        int l = 0;
        while(h[l] == 0)l++;
        int r = l;
        while(r < n && h[r+1] != 0)r++;
        cnt++;

        for(int i = l;i <= r;i++)h[i]--;
    }
    cout << cnt << endl;
    return 0;
}
