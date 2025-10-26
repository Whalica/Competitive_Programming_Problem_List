//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	int n, k;
	std::cin >> n >> k;
	
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	
	int max = *std::max_element(a.begin(), a.end());
	int l = 0, r = n - 1;
	while (l < n && a[l] == max) {
		l++;
	}
	while (r >= 0 && a[r] == max) {
		r--;
	}
	
	bool ok = false;
	for (int i = l; i <= r; i++) {
		if (a[i] == max) {
			ok = true;
		}
	}
	
	if (ok && r - l + 1 <= k) {
		std::cout << max << "\n";
	} else if (!ok && r - l + 1 + 1 <= k) {
		std::cout << max << "\n";
	} else {
		std::cout << -1 << "\n";
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
