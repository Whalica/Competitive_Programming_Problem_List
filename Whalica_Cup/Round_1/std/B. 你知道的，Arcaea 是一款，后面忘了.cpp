//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	int n;
	std::cin >> n;
	
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] < -25 || a[i] > 25) {
			std::cout << "NO\n";
			return;
		}
	}
	
	std::cout << "YES\n";
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
