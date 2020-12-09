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
const ll INF = 1e18;



struct SmartPrimeFactorize {
	vector<int> sieve;

	SmartPrimeFactorize(int Max_N) : sieve(Max_N + 1, 0) {
		//コンストラクタ中で篩を構築
		for (int i = 0; i <= Max_N; i++) sieve[i] = i;

		for (int i = 2; i * i <= Max_N; i++) {
			if (sieve[i] == i) {
				for (int j = i + i; j <= Max_N; j += i) {
					sieve[j] = i;
				}
			}
		}
	}

	
	vector<int> prime_factorize(int n) {
		vector<int> fact;
		while (n != 1) {
			fact.push_back(sieve[n]);
			n /= sieve[n];
		}
		return fact; //素因数を列挙した配列を返す
	}
};


int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	rep(i, n) cin >> v[i];

	SmartPrimeFactorize spf(1e6);

	const int Max = 1e6 + 1;

	vector<int> cnt(Max);
	rep(i, n) {
		auto fact = spf.prime_factorize(v[i]);

		set<int> tmp;
		for (auto x : fact) tmp.insert(x);

		for (auto x : tmp) cnt[x]++;
	}

	bool is_pairwise = true;
	rep(i, Max) is_pairwise &= (cnt[i] < 2);

	bool is_setwise = true;
	int g = 0;
	rep(i, n) g = gcd(g, v[i]);
	if (g != 1) is_setwise = false;


	if (is_pairwise) cout << "pairwise coprime" << endl;
	else if (is_setwise) cout << "setwise coprime" << endl;
	else cout << "not coprime" << endl;
}