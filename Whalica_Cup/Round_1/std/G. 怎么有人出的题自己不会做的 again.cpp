//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

constexpr i64 P = 998244353;

i64 power(i64 a, i64 b) {
	a %= P;
	i64 res = 1;
	for (; b; a = (a * a) % P, b >>= 1) {
		if (b & 1) {
			res = (res * a) % P;
		}
	}
	return res;
}

void solve() {
	i64 n, m;
	std::cin >> n >> m;
	
	if (n == 1) {
		std::cout << m << "\n";
	} else if (n == 2) {
		std::cout << m * (m - 1) % P << "\n";
	} else {
		i64 ans = 0;
		for (i64 i = 0; i <= m - 2; i++) {
			ans = (ans + (m - i - 1) * power(i, n - 2) % P) % P;
		}
		n %= P;

		std::cout << ans * n % P * ((n - 1 + P) % P) % P << "\n";
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t = 1;
	std::cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
