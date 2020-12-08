#include <bits/stdc++.h>
using namespace std;

string zeros[] = {"", "0", "00", "000", "0000", "00000"};

struct Data {
    int Prefecture, City, pos, rank;
    //演算子をオーバーロードすることで比較関数を作成
    bool operator<(const Data& another) const {
        if (Prefecture != another.Prefecture) return Prefecture < another.Prefecture; // 昇順に並べる
        if (City != another.City) return City < another.City; // 同様に比較演算子を定義
        if (pos != another.pos) return pos < another.pos;
        return rank < another.rank;
    }
};


struct Ans {
    string ans;
    int pos;
    bool operator<(const Ans& another) const {
        if(pos != another.pos) return pos < another.pos;
        return ans < another.ans;
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<Data> v(m);

    for(int i=0; i<m; i++){
        cin >> v[i].Prefecture >> v[i].City;
        v[i].pos = i;
    }

    sort(v.begin(), v.end());

    //ランクを計算
    int j = 0;
    for(int i=1; i<=n; i++){
        int r = 1;
        while(i == v[j].Prefecture){
            v[j].rank = r;
            r++;
            j++;
        }
    }

    vector<Ans> ans(m);

    //output result
    for(int i=0; i<m; i++){
        string prefix = to_string(v[i].Prefecture);
        prefix = zeros[(6-prefix.size())] + prefix;

        string code = to_string(v[i].rank);
        code = zeros[(6-code.size())] + code;

        ans[i].pos = v[i].pos;
        ans[i].ans = prefix + code;
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<m; i++) cout << ans[i].ans << endl;

    return 0;
    
}
