//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

void solve() {
	std::string s;
	std::cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'n') {
			std::cout << "nya";
		} else if (s[i] == 'N') {
			std::cout << "NYA";
		} else {
			std::cout << s[i];
		}
	}
	
	std::cout << "\n";
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
