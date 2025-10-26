//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	int n, k;
	i64 s;
	std::cin >> n >> k >> s;
	
	std::vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
	}
	
	std::vector<i64> pre(n + 1);
	std::vector<int> precnt(n + 1);
	for (int i = 1; i <= n; i++) {
		pre[i] = pre[i - 1] + a[i];
		precnt[i] = precnt[i - 1] + (a[i] >= k);
	}
	
	std::map<int, int> cnt;
	i64 ans = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] < k) {
			continue;
		}
		
		int l = 1, r = i, pos = 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (pre[i] - pre[mid - 1] >= s) {
				pos = mid;
				l = mid + 1;
			} else {
				r = mid - 1;
			}
		}
		
		if (pre[i] - pre[pos - 1] >= s) {
			ans += precnt[pos];
		}
	}
	
	std::cout << ans << "\n";
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
