//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	int n;
	i64 k;
	std::cin >> n >> k;
	
	std::vector<int> a(n);
	std::map<int, int> vis;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		vis[a[i]] = 1;
	}
	
	int max = *std::max_element(a.begin(), a.end());
	
	if (k > max - vis.size() + 1) {
		std::cout << max + (k - (max - vis.size() + 1)) << "\n";
	} else {
		std::vector<int> f;
		for (int i = 0; i <= max; i++) {
			if (vis[i]) {
				continue;
			} else {
				f.push_back(i);
			}
		}
		
		std::cout << f[k - 1] << "\n";
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
