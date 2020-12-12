#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <climits>


#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;
using ll = long long;


double dp[101][101][101];

double f(double a, double b, double c) {
    int ai = a, bi = b, ci = c;
    if (dp[ai][bi][ci]) return dp[ai][bi][ci];
    if (a == 100 || b == 100 || c == 100) return 0;

    double ans = 0;
    ans += (a / (a + b + c)) * (f(a + 1, b, c) + 1);
    ans += (b / (a + b + c)) * (f(a, b + 1, c) + 1);
    ans += (c / (a + b + c)) * (f(a, b, c + 1) + 1);
    dp[ai][bi][ci] = ans;

    return ans;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(9) << f(a, b, c) << endl;
}