#include <bits/stdc++.h>
using namespace std;

char a[101][101];
bool r[101], c[101];

int main(){
    int h, w;
    cin >> h >> w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++) cin >> a[i][j];
    }
    
    //cout << "ANS" << endl;

    for(int i=0; i<h; i++){
        bool flagR = false;
        for(int j=0; j<w; j++) if(a[i][j] == '#') flagR = true;
        if(flagR) r[i] = true;
    }

    for(int i=0; i<w; i++){
        bool flagC = false;
        for(int j=0; j<h; j++) if(a[j][i] == '#') flagC = true;
        if(flagC) c[i] = true;
    }

    for(int i=0; i<h; i++){
        bool flag = false;
        for(int j=0; j<w; j++)
        if(r[i]&&c[j]){
            cout << a[i][j];
            flag = true;
        }
        if(flag) cout << endl;
    }

    return 0;
}