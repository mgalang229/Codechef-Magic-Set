#include <bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
	int res = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			// count the values that are divisible by 'm'
			if (a % m == 0) {
				cnt++;
			}
		}
		// use the concept of 'Power Sets'
		// power sets = sets of all the subsets of a set
		// you can get the number of sets in a power set using 2 ^ k
		// the null set is also included in the power set
		// so we subtract 1 to remove that
		cout << Power(2, cnt) - 1 << '\n';
	}
	return 0; 
}
