//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	int n, k;
	std::cin >> n >> k;
	
	std::vector<int> p(n);
	for (int i = 0; i < n; i++) {
		std::cin >> p[i];
	}
	
	if (n == 1) {
		std::cout << (k == 0 ? "YES" : "NO") << "\n";
		return;
	}

	std::vector<int> vis(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (vis[i]) {
			continue;
		} else {
			cnt++;
			int j = i;
			while (!vis[j]) {
				vis[j] = 1;
				j = p[j] - 1;
			}
		}
	}
	
	if (k >= n - cnt && k % 2 == (n - cnt) % 2) {
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
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
